//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Salesman.cpp
//  @ Date : 19.12.2022
//  @ Author :
//
//
#include "Salesman.h"



Salesman::Salesman(string nm, int sId,Storage* st, Order_list* ol):storage(st),order_list(ol){
    User::name=nm;
    User::id=sId;

}
void Salesman::add_flower_to_storage() {
    string flower_name;
        int count, price;
        cout<<"enter flower name: "<<endl;
        cin>>flower_name;
        cin.ignore(80, '\n');
        cout<<"enter flower count"<<endl;
        cin>>count;
        cin.ignore(80, '\n');
        cout<<"enter each flower price"<<endl;
        cin>>price;
        cin.ignore(80, '\n');
        Flower* ptr_flower= new Flower(flower_name,count,price);
        storage->add_flower(ptr_flower);
        storage->get_flower_list();
}

void Salesman::form_order() {
    float price, profit;
    bool pack, deliver;
    Order* ord;
    shoping_list=storage->choose_flowers();
    price=shoping_list->storage_cost()*1.35f;
    cout << "Do client need package(y/n), \n";
    while (true){
        char ch = cin.get();
        cin.ignore(80, '\n');
        switch(ch){
        case'y':
            pack=true;
            price+=20;
            break;
        case'n':
            pack=false;
            break;
        default:
            cout<<"wrong button. \n";
            continue;
        }
        break;
    }
    cout << "Do client need deliver(y/n), \n";
    while (true){
        char ch = cin.get();
        cin.ignore(80, '\n');
        switch(ch){
        case'y':
            deliver=true;
            price+=200;
            break;
        case'n':
            deliver=false;
            break;
        default:
            cout<<"wrong button. \n";
            continue;
        }
        break;
    }
    cout<<"Total price: "<<price<<". Do you agree to the price?(y/n)";
    while (true){
        char ch = cin.get();
        cin.ignore(80, '\n');
        profit = price-shoping_list->storage_cost();
        switch(ch){
        case'y':
            shoping_list->storage_subtraction(storage);
            ord = new Order(User::get_id(),pack,deliver,price,profit);
            order_list->add_order(ord);
            cout<<"Deal is done";
            break;
        case'n':
            break;
        default:
            cout<<"wrong button. \n";
            continue;
        }
        break;
    }

}

void Salesman::interact() {
    while(true){
        cout << "Press 'i' to add flower to storage, \n"
        << "press 'f' to form order, \n"
        << "press 's' to see storage, \n"
        << "press 'q' to quit: \n";
        char ch = cin.get();
        cin.ignore(80, '\n');
        switch(ch){
        case'i':
            cout<<"add_flower_to_storage();";
            add_flower_to_storage();
            break;
        case'f':
            form_order();
            break;
        case's':
            storage->get_flower_list();
            break;
        case'q':
            return;
            break;
        default:
            cout<<"wrong button. \n";
            break;

        }
    }
}




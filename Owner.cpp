//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Owner.cpp
//  @ Date : 19.12.2022
//  @ Author : 
//
//

#include<iostream>
#include "Owner.h"
using namespace std;
Owner::Owner(Salesman_list* ptr_slm, string nm, Storage* st, Order_list* ol, Summary *tmp_summary):slm_l(ptr_slm),storage(st),order_list(ol),summary(tmp_summary)
{
    User::set_id(0);
    User::set_name(nm);

}

void Owner::add_salesman() {
    int id;
    string nm;
    cout<<"Enter Name:"<<endl;
    cin>>nm;
    cin.ignore(80, '\n');
    while(true){
        cout<<"Enter ID:"<<endl;
        cin>>id;
        cin.ignore(80, '\n');
        if (!slm_l->in_list(id) && id!=0){
            Salesman* tmp_slm= new Salesman(nm,id,storage,order_list);
            slm_l->add_salerman(tmp_slm);            
            break;
        }
        else{
            cout<<"Id is occupied. Choose enother one.";
        }

    }

}

void Owner::delete_salesman() {
    int id;
    while(true){
        cout<<"Enter ID"<<endl;
        cin>>id;
        cout<<id<<endl;
        cin.ignore(80, '\n');
        if (slm_l->in_list(id)){
            slm_l->remove_salesman(id);
            break;
        }else{
            cout<<"can't find salesman";
        }
    }
}

void Owner::interact() {
    while(true){
        cout << "Press 'i' to add new salesman, \n"
        << "press 'd' to delete salesman, \n"
        << "press 's' to see sum up,\n"
        << "press 'l' to see salesmans lists, \n"
        << "press 'q' to quit: \n";
        char ch = cin.get();
        cin.ignore(80, '\n');
        switch(ch){
        case'i':
            add_salesman();
            break;
        case'd':
            delete_salesman();
            break;
        case's':
            summary->to_sum_up();
            break;
        case'l':
            show_salesman_list();
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

void Owner::show_salesman_list()
{
   slm_l->get_salerman_list();
}


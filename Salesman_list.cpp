//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Salesman_list.cpp
//  @ Date : 20.12.2022
//  @ Author : 
//
//


#include "Salesman_list.h"

void Salesman_list::add_salerman(Salesman* tmp_slm) {
    slm_list.push_back(tmp_slm);
}

void Salesman_list::get_salerman_list() {
    if (slm_list.empty()){
                   cout<<"list is empty"<<endl;
           }
           else{
               cout<<"Salesman list"<<endl;
               cout<<"=========================="<<endl;
               cout<<"id";
               cout<<"\t||\t";
               cout<<"name";
               cout<<"\t||"<<endl;
               cout<<"=========================="<<endl;
               iter= slm_list.begin();
               while(iter!= slm_list.end()){
                   cout<<(*iter)->get_id();
                   cout<<"\t||\t";
                   cout<<(*iter)->get_name();
                   cout<<"\t||"<<endl;
                   *iter++;
               }
               cout<<"=========================="<<endl;
           }
}

void Salesman_list::remove_salesman(int id) {
    if (slm_list.empty()){
        cout<<"list is empty"<<endl;
    }
    else{
        iter= slm_list.begin();
        while(iter!= slm_list.end()){
            if ((*iter)->get_id() == id){
                slm_list.erase(iter);
                break;
            }

            *iter++;
        }
    }

}

Salesman *Salesman_list::find_slm(int id){
    if (!slm_list.empty()){
    iter= slm_list.begin();
    while(iter!= slm_list.end()){
        if ((*iter)->get_id() == id){
            return *iter;
        }
        *iter++;
    }
    }
}

void Salesman_list::put_list_to_file(char *path){
    if (!slm_list.empty()){
        ofstream fout;
        fout.open(path);
        iter= slm_list.begin();
        while(iter!= slm_list.end()){
            fout<<(*iter)->get_name()<<endl;
            fout<<(*iter)->get_id()<<endl;
            *iter++;
           }
        fout.close();
    }
}

void Salesman_list::get_list_from_file(char *path){
    ifstream fin;
    string nm;
    int id;
    fin.open(path);
    if(fin.is_open()){
        while(!fin.eof()){
            Salesman* tmp_slm = new Salesman;
            stringstream ss;
            nm="";
            fin>>nm;
            if (nm!=""){
                tmp_slm->set_name(nm);

            }
            nm="";
            fin>>nm;
            if (nm!=""){
                ss<<nm;
                id=0;
                ss>>id;
                tmp_slm->set_id(id);

                slm_list.push_back(tmp_slm);
            }
        }
    }
    fin.close();

}

bool Salesman_list::in_list(int id)
{
    if (!slm_list.empty()){
    iter= slm_list.begin();
    while(iter!= slm_list.end()){
        if ((*iter)->get_id() == id){
            return true;
        }
        *iter++;
    }
    return false;
    }
}



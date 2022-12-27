//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Storage.h
//  @ Date : 20.12.2022
//  @ Author : 
//
//
#include<Flower.h>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
using namespace std;

#if !defined(_STORAGE_H)
#define _STORAGE_H


class Storage {
private:
    vector<Flower*> flower_vect;
    vector<Flower*>::iterator iter;
public:
    ~Storage();
    void add_flower(Flower *temp_flw);
    void get_flower_list();
    void get_storage_from_file(char* path);
    void put_storage_to_file(char* path);
    bool in_vect(string nm);
    Flower* find_flower(string nm);
    Storage* choose_flowers();
    float storage_cost();
    void storage_subtraction(Storage* storage);

};

#endif  //_STORAGE_H

//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : program.h
//  @ Date : 19.12.2022
//  @ Author : 
//
//
#include "Storage.h"
#include "Order_list.h"
#include "Owner.h"
#include "Salesman_list.h"

#include <list>
#include <vector>
#include<iostream>
#include<string>
#include<fstream>

#ifndef _PROGRAM_H
#define _PROGRAM_H
using namespace std;

class Program
{
private:
    Storage storage;
    Order_list order_list;
    Salesman_list salesman_list;
    Owner* owner ;
    User* autorised_user;
public:
    Program(string nm);
    ~Program();
	void get_report();
    void get_salesman_list();
	void log_in();
};

#endif  //_PROGRAM_H

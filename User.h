//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : User.h
//  @ Date : 19.12.2022
//  @ Author : 
//
//

#include"string"
#if !defined(_USER_H)
#define _USER_H
using namespace std;
class User {
protected:
    string name;
	int id;
public:
    virtual int get_id();
    virtual string get_name();
    virtual void set_name(string nm);
    virtual void set_id(int ID);
    virtual void interact()=0;
};

#endif  //_USER_H

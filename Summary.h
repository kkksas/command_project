//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Summary.h
//  @ Date : 22.12.2022
//  @ Author : 
//
//


#if !defined(_SUMMARY_H)
#define _SUMMARY_H
#include "Order_list.h"
#include "Salesman_list.h"
#include "Storage.h"

class Summary {
private:
    Order_list* order_list;
    Salesman_list* salesman_list;
    Storage* storage;
public:
    Summary(Order_list* ord_list,Salesman_list* slm_list, Storage* tmp_storage):order_list(ord_list),salesman_list(slm_list),storage(tmp_storage)
    {
        /*�����*/
    }
	void to_sum_up();
};

#endif  //_SUMMARY_H

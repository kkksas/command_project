//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : flower.cpp
//  @ Date : 22.12.2022
//  @ Author : 
//
//


#include "Flower.h"
Flower::Flower(string nm, int count, float flw_price){
    flower_name=nm;
    quantity=count;
    price=flw_price;
}
string Flower::get_name() {
    return flower_name;
}

int Flower::get_quantity() {
    return quantity;
}

float Flower::get_price() {
    return price;
}

void Flower::set_price(float flw_price) {
    price=flw_price;
}

void Flower::set_quantity(int flw_count) {
    quantity=flw_count;
}


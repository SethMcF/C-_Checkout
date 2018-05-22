#pragma once

//Seth McFarland
//MovieCheckOut.h
//Last worked on 5/10/2018
//Movie rentals

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>


using namespace std;

struct menuItemType
{
	string menuItem;
	double menuPrice;
};


void getCustomerInfo();
void getdata(menuItemType[], menuItemType[], int&);
void showMenu(menuItemType[], int);
void printBill(menuItemType[], int); 



#ifndef STADIUM_H
#define STADIUM_H
#include <iostream>
#include <string>
#include "binarysearchtree.h"

using namespace std;

class Stadium
{
private:  
    string stadium;       //Name of stadium
    string team;          //Name of team
    string address;       //Address
    string phone_num;     //Phone number
    string open_date;     //Opening date
    string capacity;      //Maximum capacity

    BinarySearchTree b;   //Binary Search tree
public:
    //Default constructor
    Stadium();

    //Reads in files' data to store
    void read_files();
};


























#endif // STADIUM_H

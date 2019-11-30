//
//  main.cpp
//  Task 9
//
//  Created by Meghna Iyer on 11/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int y,w,d;
    cout<<"\nEnter the number of days : ";
    cin>>d;
    y = d/365;
    d = d%365;
    w = d/7;
    d = d%7;
    cout<<"\nYears : "<<y;
    cout<<"\nWeeks : "<<w;
    cout<<"\nDays : "<<d;
    return 0;
}

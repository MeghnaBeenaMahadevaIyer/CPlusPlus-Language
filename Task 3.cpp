//
//  main.cpp
//  Task 3
//
//  Created by Meghna Iyer on 11/22/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter the year : ";
    cin >> y;
    if (y % 4 == 0)
        cout << "\nThe given year is a leap year.";
    else
        cout << "\nThe given year is not a leap year.";
    return 0;
}

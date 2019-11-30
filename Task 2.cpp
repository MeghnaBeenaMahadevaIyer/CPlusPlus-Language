//
//  main.cpp
//  Task 2
//
//  Created by Meghna Iyer on 11/22/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if ( n % 2 == 0 )
    {
        cout << "\nThe given number is an even number.";
    }
    else
    {
        cout << "\nThe given number is an odd number.";
    }
    return 0;
        
}

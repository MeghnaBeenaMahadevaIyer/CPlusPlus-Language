//
//  main.cpp
//  Task 4
//
//  Created by Meghna Iyer on 11/22/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int num[10];
    int n, i, sum = 0;
    cout << "How many elements do you want in the array ? : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++ )
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++ )
    {
        sum = sum + num[i];
    }
    cout << "\nThe calculated sum of all the elements of the given array is " << sum;
    return 0;
}

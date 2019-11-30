//
//  main.cpp
//  Task 5
//
//  Created by Meghna Iyer on 11/23/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;
int main ()
{
    int num[10];
    int n, i, max, min;
    cout << "How many elements do you have in mind? : ";
    cin >> n;
    cout << "Enter the elements : ";
    for ( i = 0; i < n; i++)
        cin >> num[i];
    max = num[0];
    for ( i = 1; i < n; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    min = num[0];
    for ( i = 1; i < n; i++)
    {
        if (min > num[i])
            min = num[i];
    }
    cout << "\nThe largest element in the array is " << max;
    cout << "\nThe smallest element in the array is " << min;
    return 0;
}

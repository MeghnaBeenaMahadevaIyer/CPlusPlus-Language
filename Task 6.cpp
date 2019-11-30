//
//  main.cpp
//  Task 6
//
//  Created by Meghna Iyer on 11/23/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int size, i, j, temp;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "\nEnter the elements of the array : ";
    for( i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if( arr[j] < arr[i] )
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nElements of the array in ascending order : " << "\n";
    for( i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << "\n";
    }
    return 0;
}

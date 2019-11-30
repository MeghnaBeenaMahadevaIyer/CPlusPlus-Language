//
//  main.cpp
//  Task 7
//
//  Created by Meghna Iyer on 11/23/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
using namespace std;
void swap ( int*, int* );
int main()
{
    int a, b;
    cout << "Enter value of A : ";
    cin >> a;
    cout << "Enter value of B : ";
    cin >> b;
    cout << "Before swapping : ";
    cout << "\nA = " << a;
    cout << "\nB = " << b;
    swap( &a, &b );
    cout << "\nAfter swapping : ";
    cout << "\nA = " << a;
    cout << "\nB = " << b;
    return 0;
}
void swap( int *m, int *n )
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

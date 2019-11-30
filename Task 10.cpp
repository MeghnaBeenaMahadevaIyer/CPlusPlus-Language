//
//  main.cpp
//  Task 10
//
//  Created by Meghna Iyer on 11/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[20];
    int i;
    cout<<"Enter the string : ";
    cin>>s;
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    cout<<"\nThe entered string in lowercase : "<<s;
    return 0;
}

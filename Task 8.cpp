//
//  main.cpp
//  Task 8
//
//  Created by Meghna Iyer on 11/30/19.
//  Copyright © 2019 Meghna Iyer. All rights reserved.
//

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char word1[100], word2[100];
    cout<<"\nUse either small or big letters.";
    cout<<"\nEnter the first word : ";
    cin>>word1;
    cout<<"\nEnter the second word : ";
    cin>>word2;
    int i,j;
    long int n1=strlen(word1);
    long int n2=strlen(word2);
    int c=0;
    if(n1!=n2)
    {
        cout<<"\nThey are not anagrams! ";
        return 0;
    }
    else
    {
        for(i=0;i<n1;i++)
            for(j=0;j<n2;j++)
                if(word1[i]==word2[j])
                    ++c;
    }
    if(c==n1)
        cout<<"\nThey are Anagrams!";
    else
        cout<<"\nThey are not Anagrams!";
    return 0;
}

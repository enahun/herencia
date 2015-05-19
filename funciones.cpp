/* 
 * File:   main.cpp
 * Author: development
 *
 * Created on 18 de mayo de 2015, 07:07 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

int suma(int &x , int &y);
/*
 * 
 */
int main(int argc, char** argv) {
    
    int a=1,b=1;
    cout<<"Valores originales del main "<<a<<" "<<b;
        cout<<""<<endl;

    cout<<suma(a,b);
    cout<<""<<endl;
    cout<<"Valores finales del main "<<a<<" "<<b;

    return 0;
}

int suma(int &x , int &y)
{
    x=5;
    y=5;
    return x+y;
}

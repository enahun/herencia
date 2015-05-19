/* 
 * File:   main.cpp
 * Author: development
 *
 * Created on 11 de mayo de 2015, 07:49 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;
class suma
{
    private: int n2, n1;
    
public:
    suma()
    {
        n1=0;
        n2=0;
    }
    suma(int a1, int a2)
    {
        n1=a1;
        n2=a1;
    }
    void setA1(int num1)
    {
        n1=num1;
    }
    int getA1()
    {
        return n1;
    }
     void setA2(int num2)
    {
        n2=num2;
    }
    int getA2()
    {
        return n2;
    }
    /////CLASE AMIGA
    friend ostream &operator <<(ostream &var, suma&s)
    {
        var<<s.getA1()<<s.getA2();
        return var;
    }
    
    //////funcion de sobrecarga
    suma &operator++()
    {
        cout << "Numero 1" << endl;
        cin>>n1;
        cout << "Numero 2" << endl;
        cin>>n2;
        
        cout<<" "<<endl;
        
        cout<<"Resultado :"<<n1+n2<<endl;
        cout<<"concatenado :";
        return *this;
    }
};


/*
 * 
 */
int main(int argc, char** argv) {
    
    suma s;
    cout<<++s<<endl;

    suma s1;
    cout<<s1;
    
        return 0;

}


#include<iostream>
using namespace std;
int main()
{

    //pointer
    //array of pointer
    //chain pointer
    int b=99,a=98,d=107;

    int *c=&b;
    int *array[4]={&b,&a,&d};

    cout << endl << "The addres of B.." << c;
    cout << endl << "The Value of B.." << *c;
    cout << endl << "The addres of Array.." << array;
    cout << endl << "The Value Of Array.." << *array[0];
    cout << endl << "The Value Of Array.." << *array[1];
    cout << endl << "The Value Of Array.." << *array[2];

    //chain pointer

    int **p=&c;

    cout << endl << "The Address Of Chain Pointer :-" << **p;



    return 0;
}
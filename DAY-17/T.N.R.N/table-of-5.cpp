#include<iostream>
using namespace std;
int table()
{
    int b;

    cout << "Enter The Number for Multiplication Table :- ";
    cin >> b;

    
    for(int i=1;i<=10;i++)
    {
        cout << b << " * " << i << " = " << b*i << endl;
    } 
}
int main()
{
    //Write a function that prints the multiplication table of 5.

    

    table();   
}
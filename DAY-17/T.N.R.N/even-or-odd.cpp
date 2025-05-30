//Write a function that prints whether numbers from 1 to 10 are odd or even.
#include<iostream>
using namespace std;
int evenodd()
{
    for(int i=1;i<=10;i++)
    {
        if(i%2==0)
        {   
            cout << "The Even Number's Is :-" << i << endl;
        } 
        else{
            cout << "The  odd Number's Is :-" << i << endl;
        }
    }
}
int main()
{
 
        evenodd();
    
    return 0;
}
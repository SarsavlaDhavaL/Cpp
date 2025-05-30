#include<iostream>
using namespace std;
int even()
{
    for(int no=0;no<=20;no++)
    {
        if(no%2==0)
        {
             cout << "even No Is :-" << no << endl;
        }
    }
}
int main()
{   

    //Create a function that prints the even numbers from 1 to 20.
    even();

}
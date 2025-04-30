#include<iostream>
using namespace std;
int main(){
    int i=1 , fact;

    cout << "Enter Number For Factor :- ";
    cin >> fact;


    do
    {
        if (fact%i==0)
        {
            cout << " " << i;
        }
        i++;
    } while (i<=fact);
    
}
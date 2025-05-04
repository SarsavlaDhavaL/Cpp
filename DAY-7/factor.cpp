#include<iostream>
using namespace std;

int main(){
    int i,fact=1;

    cout << "Enter N :-  ";
    cin >> fact;

    for (i = 1; i <= fact; i++)
    {
        if(fact%i==0){
            cout << "  " <<  i;
        }
        
    }

     return 0;
}
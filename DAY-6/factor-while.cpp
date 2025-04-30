#include<iostream>
using namespace std;

int main(){
    int i=1,factor=1;

    cout << "Enter For Factor :- " ;
    cin >> factor;

    while (i<=factor)
    {
        if(factor%i==0){
            cout << " " << i;
        }
        i++;
    }
    
}
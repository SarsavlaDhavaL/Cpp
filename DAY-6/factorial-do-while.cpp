#include<iostream>
using namespace std;
int main(){
    int i,n,fact=1;

    cout << "Enter N :-";
    cin >> n;

    i=n;

    do{
        fact=fact*i;
        i--;
    }while(i>=1);

    cout << "the Factorial of  " << n << " Is  " << fact;
}
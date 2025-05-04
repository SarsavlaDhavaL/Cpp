#include<iostream>
using namespace std;

int main(){
    int a,fact=1,n;

    //factorial of n to 1    
    
    cout<< "Enter The Number :- ";
    cin >> n;
        //50 
    for(a=n;a>=1;a--){ 
        fact = fact * a ; 
    }

    cout << " fact of " << n << " Answer " << fact << endl;
}
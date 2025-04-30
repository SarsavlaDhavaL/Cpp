#include<iostream>
using namespace std;
int main(){
    int i,n,factorial=1;
    
    cout << "Enter N :- ";
    cin >> n;

    i=n;
    while(i>=1){
        factorial=factorial * i;
        i--;
    }
    cout << " Fact of " << n << "   Is " << factorial;
}
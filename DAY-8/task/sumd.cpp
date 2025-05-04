#include<iostream>
using namespace std;

int main(){
    
    int n,temp,sum=0;
    cout << "enter Digits :- ";
    cin >> n; 

    temp = n;


    for(int a=0;temp>9;temp++){
        int ld = n%10 ;
        sum=sum+ld;
        n=n/10;
    }
    cout << "sum Of All Digit :- " << sum << endl;
}
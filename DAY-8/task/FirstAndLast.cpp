#include<iostream>
using namespace std;
int main(){
    int f,l,n;

    cout << "Enter N:- ";
    cin >> n; //1234
    


    l=n%10; // for last digtis

    while(n>0){
        f=n%10; //for first digits
        n=n/10; //remove last digit
    }
    
    cout << "first Digit is :- " << f << endl;
    cout << "Last digit Is :- " << l << endl;

    cout << "first & Last digits Addtion :- " << f+l << endl;
    cout << "first & Last digits Subtraction :- " << f-l << endl;
    cout << "first & Last digits division :- " << f/l << endl;
    cout << "first & Last digits Multiplication :- " << f*l << endl;
}
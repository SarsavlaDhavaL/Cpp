#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;

    cout << "Enter Number A :-" ;
    cin >> a;
    cout << "Enter Number B :-" ;
    cin >> b;
    cout << "Enter Number C :-" ;
    cin >> c;
    cout << "Enter Number D :-" ;
    cin >> d;
    cout << "Enter Number E :-" ;
    cin >> e;


    //find the smallest value of three number;
    
    (a < b) ? (a < c) ? cout << "A IS SMALL" : cout << "C IS SMALL" : (b < c) ? cout << "B iS SMALL " : cout << "C  IS SMALL ";

    //fine The Smalledst Number  Of Four Number;

    (a < b) ?  (a < c) ? (a < d) ? cout << "A IS SMALL" : cout << "D IS SMALL" : (c < d) ? cout << "C IS SMALL" : cout << "D IS SMALL" : (b < c) ? (b < d) ? cout << "B IS SMALL" : cout << "D IS SMALL" : (c < d) ? cout << "C IS SMALL" :   cout << "D IS SMALL";  
        
        

    //fine The Smallest Number  Of Fifth Number;

     (a < b) ? (a < c) ? (a < d) ? (a < e) ? cout << "A IS SMALL" : cout << "E IS SMALL" : (d < e) ? cout << "D IS SMALL" : cout << "E IS SMALL" : (c < d) ? (c < e) ? cout << "C IS SMALL" : cout << "E IS SMALL" : (d < e) ? cout << "D IS SMALL" : cout << "E IS BIG" : (b < c) ? (b < d) ? (b < e) ?  cout << "B IS SMALL" : cout << "E IS SMALL" : (d < e) ? cout << "D IS SMALL" :  cout << "E IS SMALL" : (c < d) ? (c < e) ? cout << "C IS SMALL" : cout << "E IS SMALL" : (d < e) ? cout << "D IS SMALL" : cout << "E IS SMALL";
                    
}
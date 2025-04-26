#include<iostream>
using namespace std;

int main(){
    
    
    // find a Bigest value of three number 
    
    int a,b,c; 

    cout << "Enter A :-";
    cin >> a;
    
    cout << "Enter B :- ";
    cin >>b;
    
    cout << "Enter C:-";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout <<  "A is Big " << a << endl;
        }
        else{   
            cout <<  "C is Big " << c << endl;
        }
    }
    else{
        if (b > c)
        {
            cout << "B is Big " << b << endl;
        }
        else{
            cout << "C is Big " << c << endl;
        }
        
    }
    


}
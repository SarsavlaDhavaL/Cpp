#include<iostream>
using namespace std;

int main(){
    
    
    // find a Bigest value of Four number 
    
    int a, b, c, d; 

    cout << "Enter A :-";
    cin >> a;
    
    cout << "Enter B :- ";
    cin >> b;
    
    cout << "Enter C:-";
    cin >> c;
    
    cout << "Enter C:-";
    cin >> d;
    
    
    if (a > b)
    {
        if (a > c)
        {
            if(a > d)
            {
                cout <<  "A is Big " << a << endl;
            }
            else{
                cout <<  "D is Big " << d << endl;
            }
        }
        else{   
            if (c > d)
            {
                cout <<  "C is Big " << c << endl;
            }
            else{
                cout <<  "D is Big " << d << endl;
            }
            
        }
    }
    else{
        if (b > c)
        {
            if (b > d)
            {
                cout << "B is Big " << b << endl;
            }
            else{
                cout << "D is Big " << d << endl;
            }
        }
        else{
            if (c > d)
            {
                cout << "C is Big " << c << endl;
            }
            else{
                cout << "D is Big " << d << endl;
            }
            
        }
        
    }
    


}
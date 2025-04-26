#include<iostream>
using namespace std;

int main(){
    
    
    // find a Bigest value of fifth number 
    
    int a, b, c, d, e; 

    cout << "Enter A :-";
    cin >> a;
    
    cout << "Enter B :- ";
    cin >> b;
    
    cout << "Enter C:-";
    cin >> c;
    
    cout << "Enter D:-";
    cin >> d;
    
    cout << "Enter E:-";
    cin >> e;
    
    
    
    if (a > b)
    {
        if (a > c)
        {
            if(a > d)
            {
               if (a > e)
               {
                    cout <<  "A is Big " << a << endl;
               }
               else{
                    cout <<  "E is Big " << e << endl;
               }
  
            }
            else{
                if (d > e)
                {
                    cout <<  "D is Big " << d << endl;
                }
                else{
                    cout <<  "E is Big " << e << endl;
                }
                
            }
        }
        else{   
            if (c > d)
            {
                if (c > e)
                {
                    cout <<  "C is Big " << c << endl;
                }
                else{
                    cout <<  "E is Big " << e << endl;
                }
                
            }
            else{
               if (d > e)
               {
                    cout <<  "D is Big " << d << endl;
               }
               else{
                    cout <<  "E is Big " << e << endl;
               }
               
            }
            
        }
    }
    else{
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    cout << "B is Big " << b << endl;
                }
                else{
                    cout << "E is Big " << e << endl;
                }
                
            }
            else{
               if (d > e)
               {
                    cout << "D is Big " << d << endl;
               }
               else{
                    cout << "E is Big " << e << endl;
               }
               
            }
        }
        else{
            if (c > d)
            {
                if (c > e)
                {
                    cout << "C is Big " << c << endl;
                }
                else{
                    cout << "E is Big " << e << endl;
                }
                
            }
            else{
               if (d > e)
               {
                    cout << "D is Big " << d << endl;
               }
               else{
                    cout << "E is Big " << e << endl;
               }
            }
            
        }
        
    }
    


}
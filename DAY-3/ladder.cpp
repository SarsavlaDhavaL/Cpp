#include<iostream>
using namespace std;

int main(){
   
    float per; 
    
    cout << "Enter Your Percentage :-";
    cin >> per; 

   // Ladder If else 

   if(per >= 90 && per <= 100){
        cout << per << "Congrate You Got A+ Grade" << endl; 
   }
   else if(per >= 80 && per < 90){
        cout << per << "Congrate You Got A Grade" << endl; 
   }
   else if(per >= 70 && per < 80){
        cout << per << "Congrate You Got B+ Grade" << endl; 
   }
   else if(per >= 60 && per < 70){
        cout << per << "Congrate You Got B Grade" << endl; 
   }
   else if(per >= 50 && per < 60){
        cout << per << "Congrate You Got C Grade" << endl; 
   }
   else{
        if (per > 100)
        {
            cout << "Invalid Percentage" << endl; 
        }
        else{
            cout << "Sorry.. Your Are Fail Next Time Good Luck" << endl; 
        }
        
   }
}
#include<iostream>
using namespace std;

int main(){
   int age; //Dynamic parts
    
   cout << "Enter Your Age :-";
   cin >> age; 

   //if else
     
   if(age > 18){
        cout << "You Are Elgible For Vote" << endl; 
   }
   else{
        cout << "Sorry.. You Are Not Elgible For Vote" << endl;
   }
}
// repition structure
#include<iostream>
using namespace std;


int main(){
    int no=1;
    
    // w.a.p to make 1 to 100 number but only odd numbers

    // while(no<=100){
    //    if(no%2!=0){
    //         cout << no << ", ";
            
    //    }
    //    no++;
    // }
    
    
    
    // w.a.p to make 1 to 100 number but only even numbers
    while(no<=100){
       if(no%2!=1){
            cout << no << ", " <<endl;
            
       }
       else{
            cout <<endl << no << ", " ;
       }
       no++;
    }
}
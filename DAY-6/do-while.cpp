#include<iostream>
using namespace std;

int main(){

    int no=1;


     // w.a.p to make 1 to 100 number but only odd numbers

    // do{
    //     if (no%2 !=0)
    //     {
    //         cout << no << ", ";
    //     }
    //     no++;
        
    // }while(no<=100);


    // w.a.p to make 1 to 100 number but only even numbers

    do{
        if (no%2 !=1)
        {
            cout << no << ", ";
        }
        no++;
        
    }while(no<=100);

    return 0;
}
#include<iostream>
using namespace std;

int main(){
   
    int no1, no2;

    cout << "Enter No 1 :-";
    cin >> no1;
    cout << "Enter No 2 :-";
    cin >> no2;

    int add=no1+no2;
    int sub=no1-no2;
    float div=no1/no2;
    float multi=no1*no2;

    cout << "Addition is :-" << add << endl;
    cout << "Subtraction is :-" << sub << endl;
    cout << "Division is :-" << div << endl;
    cout << "Multiplication is :-" << multi << endl;
    cout << endl;
}
#include<iostream>
using namespace std;
int retfun()
{
    float a = 10;
    return a;
}
int main()
{
    int total = retfun();
    cout << total; 
}
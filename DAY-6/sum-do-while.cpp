#include<iostream>
using namespace std;

int main(){

    int i=1,sum=0,n;

    cout << "Enter N :- " ;
    cin >> n;

    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
 
    cout << "Sum of "  << n << " is  " << sum;
}
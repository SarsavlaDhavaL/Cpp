#include<iostream>
using namespace std;

int main(){
    int i=1,n,sum=0;

    cout << "Enter N :-";
    cin >> n;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout << "Sum of " << n << " Anawer :- " << sum;
}
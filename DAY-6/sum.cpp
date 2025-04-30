#include<iostream>
using namespace std;

int main(){
    int a,sum=0,n;

    //sum of 1 to n    
    
    cout<< "Enter The Number : -";
    cin >> n;

    for(a=1;a<=n;a++){ //a=1 4<=100
        sum=sum+a;  //sum=6  6 + 4 total=10
    }

    cout << " Sum of " << n << " Answer " << sum << endl;
}
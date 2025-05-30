#include<iostream>
using namespace std;
int main(){
    int i=1,n,sum=1;

    cout << "Enter Numbers :- ";
    cin >> n;

    while(i<=n){
        if (i%3==0 && i%5==0)
        {
            cout << "red And White" <<endl;
        }
        else if (i%3==0)
        {
            cout << "Red" << endl;
        }
        else if (i%5==0)
        {
            cout << "white" << endl;
        }
        else{
            cout << i << endl;
        }
        i++;
    }


}
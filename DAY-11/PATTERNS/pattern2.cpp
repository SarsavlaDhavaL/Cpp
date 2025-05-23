#include <iostream>
using namespace std;

int main() {

    int count,a,j;

    for (int i=1;i<=1;i++)
    {
        count=0;
        for (int j=1;j<=50;j++)
        {   count=1;
            for(int a=1;a<=5;a++){
                count++;
            }
            if(count%j==0){
                cout <<j << " ";
            }
        }
        cout << endl;
    }
    


    return 0;

}   

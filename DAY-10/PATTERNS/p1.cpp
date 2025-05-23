#include<iostream>
using namespace std;
int main(){
    
    //1
    //1 2
    //1 2 3
    //1 2 3 4
    //1 2 3 4 5
    
    //1 2 3 4 5
    //1 2 3 4
    //1 2 3
    //1 2
    //1

    //5  == 5 = 6 -1 = 5  
    //5 4   
    //5 4 3     
    //5 4 3 2   
    //5 4 3 2 1 

    //5 4 3 2 1
    //5 4 3 2 
    //5 4 3
    //5 4 
    //5



    for (int i=1;i<=5;i++) //4 <= 5 true 
    {
        for(int j=6-i;j>=i;j--)// 5 >= 4 true 5 4 
        {
            cout << j << " ";
        }

        cout << endl;
    }
    
    
    
    return 0;
}
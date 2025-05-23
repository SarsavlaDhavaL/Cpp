#include<iostream>
using namespace std;
int main()
{
    int row,col;

    cout << "Enter The Row :-";
    cin >> row;
    
    cout << "Enter The column :-";
    cin >> col;

    int array[row][col];




    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin >> array[i][j] ;
        }
        cout << endl;
    }



    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << array[i][j] << ", " ;
        }
        cout << endl;
    }
}
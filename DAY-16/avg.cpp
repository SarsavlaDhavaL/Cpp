#include<iostream>
using namespace std;
int main()
{
    int row,col;

    cout << "Enter The Index Of Element :- ";
    cin >> row;
    cout << "Enter The Index Of Element :- ";
    cin >> col;

    int array[row][col];
    int sum=0;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << "Enter The element's Index " <<i<< " :- ";
            cin >> array[i][j];
        }
    }
    
    float length=sizeof(array) / sizeof(array[row][col]);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum=sum + array[i][j];
        }
    }

    float avg=sum / length;

    cout << avg <<endl;

    return 0;
}
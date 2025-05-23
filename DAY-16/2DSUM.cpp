#include<iostream>
using namespace std;
int main()
{
      //1 2 3     11 12 13     12 14 16 
      //4 5 6  +  14 15 16  =  18 20 22 
      //7 8 9     17 18 19     24 26 28

      int row,col;


      cout << "Enter The Row :- ";
      cin >> row;

      cout << "Enter The Column :- ";
      cin >> col;

      int array[row][col];
      int array2[row][col];
      int ans[row][col];
      int sum=0,i,j;

      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
          cout << "Enter The Index Of " << i << " :- ";
          cin >> array[i][j];
        }
      }
     
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
          cout << "Enter Array 2 's Index Of " << i << " :- ";
          cin >> array2[i][j];
        }
      }
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
            sum=array[i][j]+array2[i][j];
            ans[i][j]=sum;
        }
      }



      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
            cout << array[i][j] << " ";
        }
        
         if(i==col/2)
         {
           cout << " +  ";
         }
         else{
          cout << "  " << " ";
         }

         for(int j=0;j<col;j++)
        {
            cout << array2[i][j] << " ";
        }

          if(i==col/2)
         {
           cout << " =  ";
         }
         else{
          cout << "  " << " ";
         }

         for(int j=0;j<col;j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
      }

      
      

      return 0;
}
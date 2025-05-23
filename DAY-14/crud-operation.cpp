#include<iostream>
using namespace std;
int main()
{
    int size,choice,i,index,element;

    cout << "Enter The Array Size :- ";
    cin >> size;

    int array[size];

    for(int i=0;i<size;i++)
    {
        cout << " Enter Tha Element's Index  " << i << " :- " ;
        cin >> array[i];
    }
    cout << endl;
    cout << "---------------------";
    cout << endl;
    cout << endl;
   

   do{

        cout << endl << "Enter 1 For Create";
        cout << endl << "Enter 2 For Read";
        cout << endl << "Enter 3 For Update";
        cout << endl << "Enter 4 For Delete";
        cout << endl << "Enter 5 For View One value";
        cout << endl << "Enter 0 For Exit";
    
        cout << endl << "Please Select On Option :- ";
        cin >> choice;       

        switch(choice)
        {
                case 1 :
                        cout << endl << "Select The Index :- ";
                        cin >> index;

                        cout << endl << "Enter The For Insert data :-";
                        cin >> element;


                        if(index<=size)
                        {
                            for(int i=size-1;i>=index;i--)
                            {
                                array[i+1]=array[i];
                            }
                            array[index]=element;
                            size++;
                        }
                        else{
                            cout << "Index Is Not Valid...";
                        }

                        cout <<endl << "The Insert Is Done..." <<endl;
                        cout << endl << "---------------------" << endl;
                
                break;
                case 2 :
                    for(int i=0;i<size;i++)
                    {
                        cout << array[i] <<", ";
                    } 
                    cout <<endl << "The Read Is Done..." <<endl;
                    cout << endl << "---------------------" << endl;
                break;
                case 3 :
                        cout << endl << "Select The Index :- ";
                        cin >> index;

                        cout << endl << "Enter The Updated Element :-";
                        cin >> element;

                        array[index]=element;

                        cout <<endl << "The Update Is Done..." <<endl;
                        cout << endl << "---------------------" << endl;



                    break;
                case 4 :
                    cout << endl << "Select The Index For Delete :- ";
                    cin >> index;

                    if(index<=size)
                    {
                        for(int i=index;i<=size;i++)
                        {
                            array[i]=array[i+1];

                        }
                        size--;
                    }

                    cout << "The Value is Deleted..." <<endl;
                    cout << endl << "---------------------" << endl;

                break;
                case 5 :

                cout << "Enter The Index :-";
                cin >> index;

                if(index<=size)
                {
                    cout<<endl<< "The Your Particuler Value Is :-" << array[index] <<endl;                
                }

                cout <<endl << "The Particuler Value Is Done..." <<endl;
                 cout << endl << "---------------------" << endl;

                break;
                default :
                    cout <<endl << " Please Enter The Valid Value :- " <<endl;
                break;
        }
        }while(choice!=0);

}
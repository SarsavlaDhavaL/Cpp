#include<iostream>
using namespace std ;
int greeting()
{
    cout << "HeLLo.. Wel-Come..";
}
int main()
{
    int num=1;

    switch(num)
    {
        case 1:
            cout << "User : 1" <<endl;
            greeting();
            break;
        case 2:
            cout << "User : 2" << endl;
            greeting();
            break;
        default :
            cout << "Enter Valid Case ";
        break;
    }
}
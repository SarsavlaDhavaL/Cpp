#include<iostream>
using namespace std;

void greeting(int mod)
{
    if(mod == 1)
    {
        cout << " Good Morning.." ;
    }
    else if(mod == 2)
    {
        cout << " Good Noon.." ;
    }
    else if(mod == 3)
    {
        cout << " Good Evening.." ;
    }
    else{
        cout << "Shub Raatri..";
    }

}
int main()
{
    int user;

    cout << "Enter The Number Of User :-";
    cin >> user;


    switch(user){
        case 1 :
            cout << "User : 1" << endl;
            greeting(1);
            break;
        case 2 :
            cout << "User : 2" << endl;
            greeting(2);
            break;
        case 3 :
            cout << "User : 3" << endl;
            greeting(3);
            break;
        case 4 :
            cout << "User : 4" << endl;
            greeting(4);
            break;
            
        default :
            cout << "Enter Valid Case.." << endl;
            break;

    }
}
#include<iostream>
using namespace std;
int vowel()
{
    int i;
    char ch;
    string name;
 
    cout << "Enter The Name :-";
    cin >> name;
    
    


    for(int i=0;i<name.length();i++)
    {
        ch=name[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
        cout << "Vowel Character Is :-" << ch <<endl;
        }
    }
}
int main()
{
    //Define a function that prints all vowels in a given predefined string (inside the function)

    vowel();

    return 0;
}
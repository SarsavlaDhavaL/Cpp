#include<iostream>
#include<ctime>
using namespace std;
int time()
{
    time_t now = time(0);
    char* dt = ctime(&now); 

    cout << "The Current Date Is :- " << dt;
}
int main()
{
    time();

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int size;

    cout << "enter The size of Arrays :-";
    cin >> size;

    int nums[size];

    for(int i=0;i<=size;i++)
    {
        cin >> nums[i];
    }

    for(int a:nums)
    {
        cout << a;
    }

    return 0;
}
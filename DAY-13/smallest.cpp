#include<iostream>
using namespace std;
int main()
{
    int size,i;

    cout << "enter The size of Arrays :-";
    cin >> size;

    int nums[size];

    for(int i=0;i<size;i++)
    {
        cout << endl <<"Enter The Index " << i << " Element :- ";
        cin >> nums[i];
    }

    for(int a:nums)
    {
        cout << endl << a;
    }

    int mini = nums[0];

    for(i=0;i<size;i++)
    {
        if(mini>nums[i])
        {
            mini=nums[i];
        }

    }

    cout << endl;

    cout << endl << "The Smallest Number Is :- " << mini;

    return 0;
}
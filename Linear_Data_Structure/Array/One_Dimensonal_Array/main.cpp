#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size:";
    cin>>n;
    int Array[n];
    cout<<"Enter Array Value:";
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }
    cout<<"Array Value is : ";
    for(int i=0;i<n;i++)
    {
        cout<<Array[i]<<"  ";
    }
    return 0;
}

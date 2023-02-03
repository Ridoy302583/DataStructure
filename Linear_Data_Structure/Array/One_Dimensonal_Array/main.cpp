#include <iostream>

using namespace std;

int main()
{
    int n,i,pos,s=0;
    string exit;
    cout<<"Enter Your Array Size:";
    cin>>n;
    int a[n];
    cout<<"Enter Your array Element:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    start:
    int value;
    cout<<"\nEnter Your Desired Value:";
    cin>>value;
    cout<<"\nYour Value Position is:";
     for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            pos=i+1;
            s++;
            cout<<pos<<" ";
        }
    }
    if(s==0)
    {
        cout<<"Invalid Value";
        goto start;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,i,b,j;
    string exit;
    cout<<"Enter Your Array Size:";
    cin>>n;
    int a[n];
    cout<<"Enter Your array Element:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nBefore Insertion array Element are:";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>=a[i])
            {
                b=a[j];
                a[j]=a[i];
                a[i]=b;

            }
        }
    }
     cout<<"\nBefore Insertion array Element are:";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

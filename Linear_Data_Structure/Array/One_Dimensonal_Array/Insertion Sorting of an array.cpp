#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    int key;
    cout<<"Enter Your Array Size:";
    cin>>n;
    int a[n];
    cout<<"Enter Your array Element:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nBefore Sorting array Element are:";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=1;i<n;i++)
    {
       key=a[i];
       j=i-1;
       while(j>=0&& key<a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=key;
    }
    cout<<"\nAfter Sorting array Element are:";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

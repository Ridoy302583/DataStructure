#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter array Size:";
    cin>>n;
    int a[n];
    cout<<"Enter array values:";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    int sum=a[0];
     for(int i=1;i<n;i++)
    {
       sum=sum+a[i];
    }
    cout<<"Summation Of Arrays: "<<sum<<endl;
    return 0;
}

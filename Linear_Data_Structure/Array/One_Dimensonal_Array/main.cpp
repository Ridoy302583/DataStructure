#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter Your Array Size:";
    cin>>n;
    int a[n];
    cout<<"Enter Your array Value:";
    for(i=0;i<n;i=i+1)
    {
        cin>>a[i];

    }
    int lowest=a[0];
    for(i=1;i<n;i++)
    {
        if(lowest>a[i])
        {
            lowest=a[i];
        }
    }
    cout<<"Lowestest Value: "<<lowest<<endl;
    return 0;
}

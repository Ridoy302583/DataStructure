#include <iostream>
//By Iterative System Binary Search
using namespace std;
BinarySearch(int b[],int xx,int lbb,int ubb)
{

     while(lbb<=ubb)
     {
         int mid=(lbb+ubb)/2;
         if(xx==b[mid])
         {
             return mid+1;
         }
         else if(xx>b[mid])
         {
             lbb=mid+1;
             ubb=ubb;
         }
         else
            ubb=mid-1;
            lbb=lbb;
     }
}

int main()
{
    int n,x,lb,ub;
    cout<<"Enter Array size:";
    cin>>n;
    int a[n];
    cout<<"Enter Your array Values:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Your Desired Values:";
    cin>>x;
    lb=0;
    ub=n-1;
    int r=BinarySearch(a,x,lb,ub);
    cout<<"Your Value Position is:"<<r;

    return 0;
}

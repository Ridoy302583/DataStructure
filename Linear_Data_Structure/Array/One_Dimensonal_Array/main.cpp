#include <iostream>

using namespace std;

int main()
{
    int n,i;
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
    start:
    int r;
    int value;
    cout<<"\nPress 1: For First Position"<<endl<<"Press 2: For Specific Position"<<endl<<"Press 3: For last Position"<<endl;
    cout<<"Where you want to insert :";
    cin>>r;
    if(r==1)
    {
        cout<<"Which value you want to insert :";
        cin>>value;
        for(i=n-1; i>=0; i--)
        {
            a[i+1]=a[i];

        }
        a[0]=value;
        n++;
        cout<<"\nAfter Insertion array Element are:";
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\nDo you want to exit:";
        cin>>exit;
        if(exit=="YES"||exit=="yes")
        {
            return 0;
        }
        else if(exit=="NO"||exit=="no"){
            goto start;
        }


    }
    if(r==2)
    {
        int pos;
        cout<<"Which Position you want to insert :";
        cin>>pos;
        cout<<"Which value you want to insert :";
        cin>>value;
        for(i=n-1; i>=pos-1; i--)
        {
            a[i+1]=a[i];

        }
        a[pos-1]=value;
        n++;
        cout<<"\nAfter Insertion array Element are:";
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\nDo you want to exit:";
        cin>>exit;
        if(exit=="YES"||exit=="yes")
        {
            return 0;
        }
        else if(exit=="NO"||exit=="no"){
            goto start;
        }


    }
    if(r==3)
    {

        cout<<"Which value you want to insert :";
        cin>>value;

        a[n]=value;
        n++;
        cout<<"\nAfter Insertion array Element are:";
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\nDo you want to exit:";
        cin>>exit;
        if(exit=="YES"||exit=="yes")
        {
            return 0;
        }
        else if(exit=="NO"||exit=="no"){
            goto start;
        }

    }
    else
    {
        cout<<"Invalid";
        goto start;
    }


    return 0;
}

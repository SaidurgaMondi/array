#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter capacity of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements to array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index,x;
    cout<<"Enter the value to delete:";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            index=1;
            break;
        }
    }
    for(int i=index;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    cout<<"array after performing deletion:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
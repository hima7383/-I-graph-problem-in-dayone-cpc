#include <bits/stdc++.h>
using namespace std;
int bin(int l , int  h , int arr[] , int ind)
{
    while(l<=h)
    {
             int m = (l+h)/2;
             if(arr[m]==ind)
                return m;
             if(arr[m]>ind)
                h=m-1;
             else
                l=m+1;
    }
    return -1;
}


int main()
{
    int row;
    cin>>row;
    for(int i = 0; i<=row;i++)
    {
        for(int x = 0 ;x<=colo;x++)
        {
            if(i==x)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }





}

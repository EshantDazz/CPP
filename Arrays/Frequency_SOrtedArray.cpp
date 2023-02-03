#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,10,20,20,20,30,30,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c=1;
    for(int i=1;i<n;i++)
    {
         if(arr[i-1]==arr[i])
         c++;
         else
         {
            cout<<arr[i-1]<<" "<<c<<endl;
            c=1;
         }

    }
    cout<<arr[n-1]<<" "<<c;
}
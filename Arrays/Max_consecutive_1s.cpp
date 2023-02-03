#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   
   int arr[]={0,1,1,0,1,1,1,1,1,0,0,1,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   int c=0;
   int max=-1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==1)
       {
           c++;
       }
       else
       {
           if(c>max)
           {
               max=c;
               c=0;
           }
       }
   }
   cout<<max;
   return 0;
}
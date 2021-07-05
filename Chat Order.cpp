#include <bits/stdc++.h>

using namespace std;
   map<string , bool>check;
   int n;

int main()
{
    cin>>n;
       string arr[n];
      for(int i =n-1;i>=0;i--)
      {
          cin>>arr[i];
          check[arr[i]]=false;
      }
       for(int i =0;i<n;i++)
       {
           if(!check[arr[i]])
           {
               cout<<arr[i]<<endl;
               check[arr[i]]=true;

           }
       }


    return 0;
}

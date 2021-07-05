#include <iostream>

using namespace std;
int n ,c,e,diff;
int main()
{
   cin>>n;
   int arr[n];
   for(int i =0;i<n;i++)cin>>arr[i];
   c+=arr[0];
   for(int i =0;i<n-1;i++){
       diff=arr[i]-arr[i+1];
     e+=diff;
   if(e<0){
    c+=e*-1;
    e=0;
   }
   }
   cout<<c;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int t,l,h;
char ch;
int main()
{
    cin>>t;
   while(t--)
   {
       vector<pair<char,int>>v1;
       vector<pair<char,int>>v2;
       cin>>l;
       for(int i =0;i<l;i++)
       {
           cin>>ch;
             v1.push_back(make_pair(ch,0));
       }
        for(int i =0;i<l;i++)
       {
           cin>>ch;
             v2.push_back(make_pair(ch,0));
       }
        for(int i =0;i<l;i++)
       {
           cin>>h;
             v1[i].second=h;
             v2[i].second=h;
       }
       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       if(v1==v2)
       {
           cout<<"YES"<<endl;
           /*
           for(int i =0;i<l;i++)
           {
               cout<<v1[i].first<<" "<<v1[i].second<<" "<<v2[i].first<<" "<<v2[i].second<<endl;
           }
           */
       }
       else
       {
           cout<<"NO"<<endl;
       }

   }
    return 0;
}

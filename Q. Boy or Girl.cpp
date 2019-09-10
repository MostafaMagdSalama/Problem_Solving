#include<bits/stdc++.h>

using namespace std;
string s1,s2;
int sum1,sum2;
int main()
{
    cin>>s1>>s2;
   for(int i =0;i<s1.size();i++)
   {
       s1[i]=(char)tolower(s1[i]);
       s2[i]=(char)tolower(s2[i]);
   }
//   sort(s1.begin(),s1.end());
 //  sort(s2.begin(),s2.end());
   for(int i =0;i<s1.size();i++)
   {
       if(s1[i]>s2[i])
       {
           cout<<1<<endl;
           return 0;
       }
       else if (s1[i]<s2[i])
       {
           cout<<-1<<endl;
           return 0;
       }
   }
   cout<<0<<endl;


    return 0;
}

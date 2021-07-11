#include <iostream>

using namespace std;

int main()
{
   string s="ROYGBIV",s2="GBIV";

   int input;
   cin>>input;
   cout<<s;
   for(int i =0;i<input-7;i++)
   {
       cout<<s2[i%4];
   }

    return 0;
}

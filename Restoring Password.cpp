#include <iostream>

using namespace std;
string password,inputs[10],passwordArry[8];
int c;

int main()
{
   cin>>password;

   for(int i =0;i<80;i+=10){
    passwordArry[c]=password.substr(i,10);
   c++;
   }
    for(int i =0;i<10;i++){
        cin>>inputs[i];
    }
    for(int i=0;i<8;i++){
       for(int j=0;j<10;j++){
        if(passwordArry[i]==inputs[j]){
            cout<<j;
        }
       }
    }



    return 0;
}

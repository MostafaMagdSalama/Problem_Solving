#include <iostream>
using namespace std;
string input;
int step;


string to_str(int num){
    string output="";
while(num){
   output+=('0'+(num%10));
   num=num/10;
}
return output;
}
int main()
{


cin>>input;
while(input.length()>1)
{
    int sum=0;
 for(int i=0 ;i<input.length();i++)
 {
    sum+=input[i]-'0';
 }
 step++;
 input=to_str(sum);

}
cout<<step;



    return 0;
}

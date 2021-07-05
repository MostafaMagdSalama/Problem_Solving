#include <iostream>

using namespace std;


long long  interations,k,counter,counterCheck,sum;
string holder;

int getNumber(char num){
return num - '0';
}
int getSum(int k){
return (k*(k+1))/2;
}
int main()
{
    cin>>interations>>k;
  for(int i =0;i<interations;i++)
  {
      cin>>holder;
      bool check[10]={false};
      sum=0;
      counterCheck=0;
      for(int j=0;j<holder.length();j++){
        int num=getNumber(holder[j]);

        if(check[num]==false && num<=k){
            check[num]=true;
            sum+=num;
            counterCheck++;
        }
      }
      if(sum == getSum(k)&&counterCheck==k+1){
        counter++;
      }
  }
  cout<<counter;

    return 0;
}

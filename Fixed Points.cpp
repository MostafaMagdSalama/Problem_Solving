#include <iostream>

using namespace std;
bool check[1000000],one,two;
int c,n,holder;

int main()
{
    cin>>n;
    int input[n];
    for(int i =0; i<n; i++)
        cin>>input[i];
    for(int i =0; i<n; i++)
    {
        holder=input[i];
        if(check[holder]==false && check[i]==false)
        {
            if(i==holder)
               {
               c++;
               check[i]==true;
               }
            else  if(i==input[holder])
            {
                two=true;
                check[holder]=true;
                check[i]=true;
                //cout<<"two in index "<<holder<<" "<<i<<endl;
            }

            else
            {
               // cout<<"one in index "<<holder<<" "<<i<<endl;

                one=true;
                check[holder]=true;
                check[i]=true;
            }

        }
    }
    if(two)    cout<<c+2;
    else if(one)    cout<<c+1;
    else {cout<<c;}



    return 0;
}

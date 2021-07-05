#include <iostream>

using namespace std;
int n,h,f_h,m;
int main()
{
    cin>>n>>h;
    while(n--){
        cin>>f_h;
        if(f_h>h)m+=2;
        else {
            m+=1;
        }
    }
    cout<<m;
    return 0;
}

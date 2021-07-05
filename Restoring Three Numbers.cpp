#include <bits/stdc++.h>
using namespace std;
long long input[4];
int main()
{
    for(int i =0;i<4;i++){
        cin>>input[i];
    }
    sort(input,input+4);
    long long a =input[3]-input[2];
    cout << a<<" "<<input[1]-a<<" "<<input[0]-a;

    return 0;
}

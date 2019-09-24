    #include<bits/stdc++.h>

    using namespace std;
void play()
{
ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int l,arr[100000+9],c;
set<int>s;
bool b;
    int main()
    {

  play();
  cin>>l;
int  in[l];
  for(int i =0;i<l;i++)
  {
      cin>>in[i];
      s.insert(in[i]);
      arr[in[i]]++;
  }
  while(!b)
  {
      c=0;
      for(int i : s)
      {
          if(arr[i]>0)
          {
              cout<<i<<" ";
              arr[i]--;
          }
          else
          {
              c++;
          }

      }
       if(c==s.size())b=true;
       cout<<endl;


  }



        return 0;

    }

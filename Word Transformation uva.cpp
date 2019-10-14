#include <bits/stdc++.h>

using namespace std;
string s;


void bfs(string s1,string s2)
{

}
int main()
{
    int t;
    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
     cin>>t;
     while(t--)
     {
vector<string>v;

string s;
    while(cin>>s,s!="*")
    {

        v.push_back(s);
    }
    cin.ignore();
    string line;

   while(getline(cin,line)&&line!="")
    {
        string s1,s2;
        stringstream ss(line);
        ss>>s1>>s2;
//bfs

queue<string>q;
map<string,int>trans;
  q.push(s1);
  trans[s1]=0;
  while(q.size()!=0&&trans.count(s2)==0)
  {
      string p=q.front();
  q.pop();
  for(int i =0;i<v.size();i++)
  {
        string h=v[i];
      if(!trans.count(h)&&p.size()==h.size())
      {
          int c=0;

          for(int j=0;j<p.size();j++)
          {
              if(p[j]!=h[j])c++;
          }
          if(c==1)
          {
              trans[h]=trans[p]+1;
              q.push(h);
          }

      }
  }
  }


//end






         cout<<s1<<" "<<s2<<" "<<trans[s2]<<endl;


    }
    if(t)cout<<endl;

     }


    return 0;
}

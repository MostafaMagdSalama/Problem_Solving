#include <bits/stdc++.h>

using namespace std;
vector<vector<int>>v(3000);
vector<int> vis(3000+9);
vector <int>level(3000+9);
vector<int> nodes(3000+9);
int c=1,c1,m=INT_MIN,l,h2;
void bfs(int s)
{

    queue<int>q;
    q.push(s);
   // level[s]=0;
    //nodes[0]=1;
    vis[s]=1;
    while(!q.empty())
    {

        int p=q.front();
        q.pop();
        for(int i:v[p])
        {
            if(vis[i]==0)
            {
                level[i]=level[p]+1;

                nodes[level[i]]++;
                if(m< nodes[level[i]])
                {
                    m=nodes[level[i]];
                    l= level[i];
                }
              q.push(i);
              vis[i]=1;
            }

        }
    }
}
int n ,y,h1,q;

int main()
{

      //  freopen("input.txt", "r", stdin);

      //  freopen("output.txt", "w", stdout);
  cin>>n;
  for(int i =0;i<n;i++)
  {
      cin>>y;
      for(int j =0;j<y;j++)
      {
          cin>>h1;
          v[i].push_back(h1);
      }
  }
  cin>>q;
  for(int i =0;i<q;i++)
  {
       // memset(vis,0,3000+9);
       // memset(level,0,3000+9);
       // memset(nodes,0,3000+9);

        vis=vector<int>(3000+9);
        level=vector<int>(3000+9);
        nodes=vector<int>(3000+9);
      cin>>h1;
      bfs(h1);
      if(v[h1].size()<1)
      {
          cout<<0<<endl;
      }
      else
      {
           cout<<m<<" "<<l<<endl;
      }

      m=INT_MIN;
      l=0;
  }

   return 0;
}

#include <bits/stdc++.h>

using namespace std;
//vector<vector<char>>v(200);
//vector<vector<bool>>vis(200,vector<bool>(200,0));
char v[200][200];
bool vis[200][200];
void read()
{

        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
}
void input(int n,int m)
{
    char h;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            //cin>>h;
           //v[i].push_back(h);
           cin>>v[i][j];
        }
    }
}
void print(int n ,int m ,vector<vector<bool>> &v)
{
     for(int i =0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
          cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
int c,mx=INT_MIN;
void floodfill(int x,int y,int n,int m,char ch)
{
    int dir1[]={0,1,-1,0};
    int dir2[]={1,0,0,-1};
if(y<0)y=m-1;
if(y>=m)y=0;
if(x<0||x>=n)return ;
    if(vis[x][y]==true||v[x][y]!=ch)
    {
        return ;
    }
    //booleam change
    vis[x][y]=true;
    c++;
    mx=max(mx,c);

    for(int i =0;i<4;i++)
    {
        int x1=x+dir1[i];
        int y1=y+dir2[i];

           floodfill(x1,y1,n,m,ch);
    }

}
int n,m,inx,iny;
char ch;

int main()
{
read();
    while(cin>>n>>m)
    {
       // v=vector<vector<char>>(200);

        for(int i=0;i<200;i++)
        {
            for(int j=0;j<200;j++)
            {
                vis[i][j]=false;
            }
        }

        input(n,m);
       cin>>inx>>iny;
       ch=v[inx][iny];

floodfill(inx,iny,n,m,ch);

c=0;
mx=0;
       for(int i =0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(vis[i][j]==false&&v[i][j]==ch)
               {
                   c=0;

                   floodfill(i,j,n,m,ch);


               }
           }
       }
                          cout<<mx<<endl;

    }
    return 0;
}

    #include <bits/stdc++.h>
    using namespace std;




    /*
    bool isPrime(int n)
    {
        // Corner case
        if (n <= 1)
            return false;

        // Check from 2 to n-1
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }

    void fun(int x)
    {
        if(x==l)
        {
            if(isPrime(v[0]+v[v.size()-1]))
            {
                cout<<v[0];
                for(int i=1; i<l; i++)
                    cout<<" "<<v[i];
                cout<<endl;
            }



            return ;
        }
        for(int i =2; i<=l; i++)
        {
            if(isPrime(i+v[v.size()-1])&&arr[i]==0)
            {
                arr[i]=1;
                v.push_back(i);
                fun(x+1);
                arr[i]=0;
                v.pop_back();

            }
        }

    }
    */


    //int arr[100000+9]={0};
    //vector<long long>v1;
    //vector<long long>v2;




    /*
    void dfs(int i)
    {

        arr[i]=1;
        for(int j:v[i])
        {
            if(arr[j]==0)
            {
                dfs(j);
            }
        }
    }

    //int level[100000]={0};
    int vis[100000]={0};
    void bfs(int s)
    {
        queue<int>q;
        q.push(s);
        level[s]=0;
        vis[s]=1;
        while(!q.empty())
        {
            int p=q.front();
            q.pop();
            cout<<p<<" "<<level[p]<<endl;
            for(int i:v[p])
            {
                if(vis[i]==0)
                {
                    level[i]=level[p]+1;
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
    }

    char ch;
    long long m=LONG_LONG_MAX;
    void fun(long long i,long long l,long long sum)
    {

        if(i==x)
        {
            cout<<m<<endl;

            if(sum==0)
            {
               //  cout<<l<<endl;
                m=min(m,l);
            }

            return ;
        }

         fun(i+1,l,sum+v1[i]);

          fun(i+1,l+1,sum+(v1[i]*(-1)));

    }
    */
    char arr[100+9][100+9];

    vector<vector<int>>v(1000000);
    //int vis[1000000];
    long long x,y,h1,h2,c,z,c1,t,n,m;
    /*
    void dfs(int s)
    {
        vis[s]=1;
        for(int i:v[s])
        {
            if(vis[i]==0)
            {

                dfs(i);
            }
        }
    }
    */
    int dir1[]={0,0,1,-1};
    int dir2[]={1,-1,0,0};
    void floodfill(int x,int y,bool vis[100+9][100+9])
    {

        if(x>=n||y>=n)
        {
            return ;
        }
        if(x<0||y<0)
        {
            return ;
        }
        if(vis[x][y]==true)
        {
            return ;
        }
        vis[x][y]=true;

        for(int i=0;i<4;i++)
        {
            if(arr[x+dir1[i]][y+dir2[i]]=='x'||arr[x+dir1[i]][y+dir2[i]]=='@')
            {

                 floodfill(x+dir1[i],y+dir2[i],vis);

            }
        }
        /*
        floodfill(x-1,y-1);
        floodfill(x-1,y);
        floodfill(x-1,y+1);
        floodfill(x,y-1);
        floodfill(x+1,y-1);
        floodfill(x+1,y);
        floodfill(x+1,y+1);
        */

    }
    int main()
    {
     // For getting input from input.txt file
      //  freopen("input.txt", "r", stdin);

        // Printing the Output to output.txt file
       // freopen("output.txt", "w", stdout);
    string s1,s2;
     cin>>x>>s1>>s2;
     int arr[200];
     for(int i =0;i<x;i++)
     {
         arr[s1[i]]++;
     }
     for(int i =0;i<x;i++)
     {
         arr[s2[i]]--;
         if( arr[s2[i]]<0)
         {
             cout<<-1<<endl;
             return 0;
         }
     }
     cout<<1000<<endl;




        /*
        cin>>x>>y>>z;
    for(int i =0;i<y;i++)
    {
        cin>>h1>>h2;
        v[h1].push_back(h2);
        v[h2].push_back(h1);
    }
    //bfs(1);


    for(int i =1;i<=x;i++)
    {
        if(vis[i]==0)
        {

            c++;
            dfs(i);
        }
    }
    if(c>z)
    {
        cout<<-1<<endl;
    }
    else
    {
      cout<<y-x+z;
    }
    */



        return 0;

    }


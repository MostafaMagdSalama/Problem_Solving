    #include<bits/stdc++.h>

    using namespace std;

    long long max1,max2,sum,c;
    int main()
    {
    cin>>max1>>max2;
    long long arr1[max1],arr2[max2];
    for(int i =0;i<max1;i++)cin>>arr1[i];
    for(int i =0;i<max2;i++)cin>>arr2[i];
    sort(arr1,arr1+max1,greater<long long>());
    sort(arr2,arr2+max2,greater<long long>());
    for(int i =0;i<max1;i++)
    {
        if(arr2[c]>=arr1[i]&&c<max2)
        {
            sum+=arr1[i];
            c++;
        }

       // sum+=min(arr1[i],arr2[i]);
    }
    cout<<sum<<endl;

        return 0;

    }

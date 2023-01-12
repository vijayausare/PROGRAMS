
//#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
using namespace std;
#define int long long int
#define go f()
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl '\n'

void f(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
     #endif
}
/*----------------------------------------------------------------------*/

int maxRepeating(int* arr, int n, int k)
{
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;

    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
   
    }
    return result;
}


int32_t main(){
    
    go;

    int t=1;
    cin>>t;
    while(t--){
        int n;
        int cnt=0;int maxCnt=0;
        cin>>n;
        int a[n];
        int b[101];
        for(int i =0;i<101;i++)b[i]=0;
        for(int  i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }

        for(int i =0;i<101;i++){
            maxCnt=max(maxCnt,b[i]);          
        }

        if(maxCnt ==n)cout<<0<<endl;
        else cout<<maxCnt<<endl;
    }



    return 0;
}













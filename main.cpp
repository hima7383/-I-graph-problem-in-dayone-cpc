#include <bits/stdc++.h>
#define ll long long
//freopen("plants.in", "r", stdin);
//freopen("output.txt", "w", stdout);
#define far(b) for(int i = 0 ; i <b;i++)
#define hima ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
#define N '\n'
#define read(x) ll(x);cin>>x;
#define all(x) x.begin(),x.end()
#define st sort(v.begin(),v.end());
#define MOD int(1e9+7)

using namespace std;
int visited[int(2*1e5)];int cnt=0;
vector<pair<int,int>>v[int(2*1e5)];
int main(){hima
int n;cin>>n;
int cnt=0;
    far(n+2){
        int x,y,z;cin>>x>>y>>z;
    v[x].push_back({y,z});
    v[z].push_back({y,x});
    }

    queue<int>q;
    q.push(1);ll sum=0;
    //visited[1]=1;
    while(!q.empty()){
        int parent=q.front();
        q.pop();if(!visited[parent]) {pair<int,int>mi;mi.first=INT_MAX;
        for(auto x:v[parent]){

            if(x.first<mi.first&&!visited[x.second]){mi.first=x.first;mi.second=x.second;}
        }

       if(mi.first!=INT_MAX) {sum+=mi.first;cnt++;}
        visited[parent]=1;
        q.push(mi.second);
        if(cnt==n-1){
            for(auto x:v[mi.second]){
                if(x.second==1){sum+=x.first;break;}
            }
        }

        }
    }
    cout<<sum<<N;
}

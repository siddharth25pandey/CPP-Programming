#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define deb(x)          cout << #x << "=" << x << endl
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define all(x)			x.begin(), x.end()
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 

vi arr,seg,lazy,pre;
int n,q;

void rangeUpdate(int s,int e,int qs,int qe,int change,int idx){

	if(lazy[idx] != 0){
		seg[idx] += (e - s + 1) * lazy[idx];
		if(s != e){
			lazy[2*idx]   += lazy[idx];
			lazy[2*idx+1] += lazy[idx];
		}
		lazy[idx] = 0;
	}

	if(s > qe || e < qs)
		return;

	if(s >= qs and e <= qe){
		seg[idx] += (e - s + 1) * change;
		if(s != e){
			lazy[2*idx]   += change;
			lazy[2*idx+1] += change;
		}
		return;
	}

	int mid = (s + e) / 2;
	rangeUpdate(s,mid,qs,qe,change,2*idx);
	rangeUpdate(mid+1,e,qs,qe,change,2*idx+1);
	seg[idx] = seg[2*idx] + seg[2*idx+1];
	return;
}

int query(int s,int e,int qs,int qe,int idx){
	if(lazy[idx] != 0){
		seg[idx] += (e - s + 1) * lazy[idx];
		if(s != e){
			lazy[2*idx]   += lazy[idx];
			lazy[2*idx+1] += lazy[idx];
		}
		lazy[idx] = 0;
	}

	if(s > qe || e < qs)
		return 0;

	if(s >= qs and e <= qe){
		return seg[idx];
	}
	int mid = (s + e) / 2;
	int L = query(s,mid,qs,qe,2*idx);
	int R = query(mid+1,e,qs,qe,2*idx+1);
	return L + R;
}


void buildTree(int s,int e,int idx){
	if(s == e){
		seg[idx] = pre[s];
		return;
	}
	
	int mid = (s + e) / 2;

	buildTree(s,mid,2*idx);
	buildTree(mid+1,e,2*idx+1);
	seg[idx] = seg[2*idx] + seg[2*idx+1];
	return;
}


void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n >> q;
    arr.resize(n);
    pre.resize(n);
    arr.resize(4*n+1);
    for(int i=0;i<n;i++) cin >> arr[i];

    pre[0] = arr[0];
    for(int i=1;i<n;i++){
    	pre[i] = pre[i-1] + arr[i];
    }

    while(q--){
    	int type;
    	cin >> type;
    	if(type == 1){
    		int i,u;
    		cin >> i >> u;

    	}else{
    		int a,b;
    		cin >> a >> b;
    		cout<<query(0,n-1,a-1,b-1,1)<<"\n";
    	}
    }
}
 
int32_t main()
{
    clock_t begin = clock();
    c_p_c();
	#ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
    return 0;
}
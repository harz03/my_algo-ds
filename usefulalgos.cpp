
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pii pair<int,int>
#define mii map<int,int>

//notes
// (a+b)mod c=(amod c+b mod c)%c;
//(a-b)mod c=(amod c-b mod c+c)%m;


//this function return a boolean vector of contains all prime number in range a
//time complexity is O(N *log*log N)
vector<bool> primeNumberInRange(ll a) {
	vector<bool> number(a, true);
	for (int i = 2; i <= a; i++) {
		for (int j = i * i; j <= a; j += i) {
			number[j] = false;
		}
	}
	return number;
}

//gcd of two number
//complexity is o(log(min(a,b)))
int gcd(int a, int b) {
	return a == 0 ? b : gcd(b % a, a);
}
//time complexity is O(logn)
vector<int> primeFactors(ll n) {
	vector<int> ans;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			ans.push_back(i);
			while (n % i == 0) {
				n = n / i;
			}
		}
	}
	if (n != 1) {
		ans.push_back(n);
	}
	return ans;
}


int32_t main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
//ghp_qbcpKDQy8Owsq2QJJkdy*42c6G5Gy62*wHMW
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
			
		}
	return 0;
}



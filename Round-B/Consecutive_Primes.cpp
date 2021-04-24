#include<bits/stdc++.h>

using namespace std;

typedef long long int l1;


float r(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

bool prime(l1 n){
	for (l1 i = 2; i*i <= n; i++){
        if(n% i == 0) return 0;
    }

    return 1;
}

void solve(l1 t){
	
	l1 z; cin >> z;
	l1 res = INT_MIN;
	vector<l1> p;
	l1 n = sqrt(z);

	for(l1 i = n; p.size() <= 1; i++){
		if(prime(i)) p.push_back(i);
	}
	for(l1 i = n-1; i >= 2 && p.size() < 5; i--){
		if(prime(i)) p.push_back(i);
	}

	for(l1 i = n+1; p.size() < 5; i++){
		if(prime(i)) p.push_back(i);
	}

	sort(p.begin(), p.end()); 

	for(int i = 1; i < p.size(); i++){
		if(p[i]* p[i-1] <= z) res = max(res, 1ll * p[i]* p[i-1] );
	}
	
	cout << "Case #" << t <<": " << res << endl;
}


int main(){
		
	l1 t; cin >> t;
	
	for(l1 i = 1; i <= t ; i++) solve(i);
	return 0;
}

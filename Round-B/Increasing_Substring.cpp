#include<bits/stdc++.h>

using namespace std;

typedef long long int l1;


float r(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve(l1 t){
	
	l1 n; cin >> n;
	string str; cin >> str;

	cout << "Case #" << t <<": " << 1 << " ";
	l1 cnt = 1;
	for(l1 i = 1; i < n; i++){
		if( str[i] > str[i-1] ) cout << ++cnt << " ";
		else{
			cnt = 1;
			cout << cnt << " ";
		}
	}	

	cout << endl;
}


int main(){
		
	l1 t; cin >> t;
	for(l1 i = 1; i <= t ; i++) solve(i);
	return 0;
}

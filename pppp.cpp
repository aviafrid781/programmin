#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 11;
bool f[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = N - 9;

  vector<int> primes;
  vector<int>chek(N+1,0);
  f[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!f[i]) {
      //primes.push_back(i);
      chek[i] = 1;
    }
  }
 int t;
 cin >> t;
 while (t--)
 {
  /* code */

  string s;
  int a;
  char ch;
  cin >>s>>a;
int b;
bool ans =0;
  for(int i = 0 ; i<s.size() ;i++) {
b= s[i]+a;
//cout<<b<<endl;
if(chek[b] == 1) {
  ans =1 ;
 // cout <<s[i]<<" "<< b<<endl;
  break;
}
  }

  if(ans ==1){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
  cout << endl;
 }



}

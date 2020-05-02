#include <bits/stdc++.h>
using namespace std;
int main() {
  long long N;
  cin>>N;
  long long abs_N = abs(N);
  long long ans;
  if(N<0) {
    ans = (-1)*abs_N*(abs_N+1)/2+1;
  } else if(N>0) {
    ans = N*(N+1)/2;
  } else {
    ans = 1;
  }
  printf("%lld\n", ans);
  return 0;
}
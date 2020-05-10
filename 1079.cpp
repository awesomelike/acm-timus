#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define N 100000

void solve(int *a) {
  *a = 0;
  *(a+1) = 1;
  for (int i=2; i<=N; i++) {
    if (i%2==0) *(a+i) = *(a+i/2);
    else if (i%2==1) *(a+i) = *(a+(i-1)/2) + *(a+(i+1)/2);
  }
}

int main () {
  int a[N];
  queue<int> ans;
  solve(a);
  
  int n;
  int *it;
  cin >> n;

  while (n!=0)
  {
    it = max_element(a, a+n+1);
    ans.push(int(*it));
    cin >> n;
  }
  
  while (!ans.empty())
  {
    cout << ans.front() << endl;
    ans.pop();
  }
  
  return 0;
}
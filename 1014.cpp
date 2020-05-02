#include <iostream>
#include <vector>
#include <stack>

using namespace std;

long long int smallestNumber (int n) {
    // If n is in [0,9], simply return itself
    if (n>=0 && n<=9) {
        return n;
    }
    stack<int> digits;
    for(int i=9; i>=2 && n>1; i--) {
        while(n%i == 0) {
            digits.push(i);
            n/=i;
        }
    }
    if (n!=1) return -1;

    long long int k = 0;
    while(!digits.empty()) {
        k = 10*k + digits.top();
        digits.pop();
    }
    return k;
}

int main()
{
    int n;
    cin >> n;
    printf("%lld", smallestNumber(n));
    return 0;
}
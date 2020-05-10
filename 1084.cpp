#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define PI 3.141592653589793238

float squareArea(int a) {
  return a*a;
}
float circleArea(int r) {
  return PI * (float)r * (float)r;
}

float alpha(int a, int R) {
  return 2*acos((float(a)/2/(float)R));
}

int main () {
  int a,R;
  cin >> a;
  cin >> R;

  if (2*R >= a*sqrt(2)) printf("%.3f", squareArea(a));
  else if (2*R <= a) printf("%.3f", circleArea(R));
  else printf("%.3f", circleArea(R) - 2*(float)R*(float)R*(alpha(a, R)-sin(alpha(a, R))));
}
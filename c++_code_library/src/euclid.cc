// Euclidean Algorithm
// Given 2 integers, return their Greatest common denominator (GCD)
#include <iostream>
#include <cassert>

using namespace std;

int gcd(int a, int b) {

  int r;

  /* Not needed if a, b >= 0 */
  if ( a < 0 ) {
    a = -a;
  }
  if ( b < 0 ) {
    b = -b;
  }

  while (b) {
    r = a % b;
    a = b;
    b = r;
  }
  assert( a >= 0 );
  return a;
}

int main( void ) {
  int a, b;

  while( cin >> a >> b ) {
    cout << gcd(a, b) << endl;
  }
  return 0;
}

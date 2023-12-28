// Simple test for armadillo. Compile using:   g++ armadillo_test.cpp -o armadillo_test.bin -O2 -larmadillo

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(){
  mat A = randu<mat>(4,5);
  mat B = randu<mat>(4,5);
  
  cout << A*B.t() << endl;
  
  return 0;
}

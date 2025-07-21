#include <iostream>

//this is how compiler sees array
//address of A[i][j] = A + [j*m+i]*w //row major
//address of A[i][j] = A + [i*n+j]*w //col major

//formula for nD array
/*
lets assume 4 dimensional array

for row major O(n^2)
addr(A[i1][i2][i3][i4]) = A + (i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4) * w

for col major O(n^2)
addr(A[i1][i2][i3][i4]) = A + (i4*d2*d3*d4 + i3*d3*d4 + i2*d4 + 1) * w

simplifing by using horners rule
for row major O(n)

A + (i4+d4*(i3 + d3*(i2+i1*d2))) * w

*/


int main(){
  int x[5]; // uninitialized array of size 5
  int y[5] = {10,20,30}; // {10,20,30,0,0)
  int z[5] = {}; // {0,0,0,0,0}

  std::cout << x[1] << std::endl;
  std::cout << 1[x] << std::endl;
  //both have same outputs
}

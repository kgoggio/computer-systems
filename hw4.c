#include <stdio.h>
#include <stdlib.h>

// Problem 1
long loop(long x, long n) {
  long result =x;
  long i;
  for(i=1;n>0;n=n-1) { 
    result=(i*x*n) + result;
    x=x-2;
  }
  return result;
}

// Problem 2
long decode2(long x, long y, long z) {
  // this is correct, i think
  //or is it better to implement
  //the changes to y and x as seperate variables?
  y = y-z;
  x =x*y;
  temp = y;
  temp <<=63;
  result >>= 63;
  result ^=x;
  return result;
  //return (y<<63>>63)^x;
  //return (temp*x)^(temp<<63 >>63);
}


#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
uint swapBits(uint x, uint i, uint j) {
  uint lo = ((x >> i) & 1);
  uint hi = ((x >> j) & 1);
  if (lo ^ hi) {
    x ^= ((1U << i) | (1U << j));
  }
  return x;
}
uint reverseXor(uint x) {
  uint n = (uint)(ceil(log(x+1)/log(2)));
  for (uint i = 0; i < n/2; i++) {
    x = swapBits(x, i, n-i-1);
  }
  return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        unsigned int temp;
        scanf("%u",&temp);
        if(temp%2==0)temp = reverseXor(temp);
        printf("%u\n",temp);
    }
    return 0;
}

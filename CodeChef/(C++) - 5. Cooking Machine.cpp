#include<bits/stdc++.h>
using namespace std;

int main(){
  int T, A, B;
  int res;

  scanf("%d",&T);
  while(T--){
    scanf("%d%d",&A,&B);

    res = 0;
    while(A&(A-1)) res++, A >>= 1;   // if A&(A-1) != 0, then A is not a power of 2
    while(A<B) res++, A <<= 1;
    while(A>B) res++, A >>= 1;

    printf("%d\n",res);
  }

  return 0;
}

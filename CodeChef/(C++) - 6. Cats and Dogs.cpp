    #include <stdio.h>
    #include <algorithm>
    #include <iostream>
    #include <vector>
    using namespace std;
     
    inline void fr( int *a)
     
    {
     register char c=0;
     while (c<33) c=getchar_unlocked();
     *a=0;
     while (c>33)
     {
         *a=*a*10+c-'0';
         c=getchar_unlocked();
     }
    }
     
     
     
    int main() {
      int n,c,d,l;
      fr(&n);
      while(n--) {
        fr(&c);fr(&d);fr(&l);
        if(l%4 ==0 ) {
          unsigned int min = 4*(d+max(0,c-2*d));
          unsigned int max = 4*(d+c);
          if(l>=min && l <= max) {
            printf("yes\n");
          } else {
            printf("no\n");
          }
        } else {
          printf("no\n");
        }
      }
      return 0;
    } 
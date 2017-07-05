#include "sum.h"

int sum(int n) {
 int i,res = 0;
 for(i=1;i<=n;i++)
   res = res + i;
 return res;
}



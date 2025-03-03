#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
  return A[x] >= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = n;
  while (ub - lb > 1){
    int mid = (lb + ub) / 2;
    if (p(mid)){
      ub = mid;
    }else{
      lb = mid;
    }
  }
  if (lb == 0 && A[lb] >= k){
    printf("%d\n", lb);
  }else{
    printf("%d\n", ub);
  }

  return 0;
}

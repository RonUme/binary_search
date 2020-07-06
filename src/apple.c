#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

 lb=0,ub=1000000000;
 while(ub-lb>1){
	int mid=(ub+lb)/2;
	int cou=0;
	for(int i=0;n>i;i++)
	 cou+=(A[i]+mid-1)/mid;
	if(cou<=k)ub=mid;
	else lb=mid;
 }

 printf("%d\n",ub);

  return 0;
}

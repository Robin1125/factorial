#include <stdio.h>

long int fact(int n){
	if(n==1 || n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}

}

int main(void) {
	int n;
	long int res;
	
	scanf("%d",&n);
   if(n>0)
   {
	res=fact(n);
	
	printf("%ld",res);
   }
   else
    printf("0");
    
	return 0;
}

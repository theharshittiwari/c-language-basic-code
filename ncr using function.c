#include <stdio.h>
int factorial(int x){
    int i;
    int fact=1;
    for(i=1;i<=x;i++){
       fact=fact*i; 
    }
    return fact;
}

int main()
{ int n,r;
printf("enter the value of n and r");
scanf("%d %d",&n,&r);
int nfact=factorial(n);
int rfact=factorial(r);
int nrfact=factorial(n-r);
int ncr=nfact/(rfact*nrfact) ;
printf("%d",ncr);

    return 0;
}

#include <stdio.h>
#include<stdlib.h>
int maze(int n , int m){
    int rightways=0;
    int downways=0; 
    if(n==1 && m==1){
       return 1;
   }
   if(n==1){
     rightways=rightways+maze(n,m-1); 
   }
   if(m==1){
     downways=downways+maze(n-1,m); 
   }
 
    if(n>1&&m>1){
     rightways=rightways+maze(n,m-1);\
      downways=downways+maze(n-1,m); 
   }
   int totalways=rightways+downways;
    return totalways;
}
int main()
{ int n,m,noofways;
printf("enter the value of n and m");
scanf("%d",&n);
scanf("%d",&m);
noofways=maze(n,m);
printf("%d",noofways);

return 0;
    
}

#include <stdio.h>
#include <string.h>
int main()
{ int i,n;
printf("enter the value of n");
scanf("%d",&n);
typedef struct cricketer{
int averagerun;
int age;
int innings;
char firstname[10];
char lastname[10];
}cricketer;
cricketer a[n];
for(i=0;i<n;i++){
scanf("%s",a[i].firstname);
scanf("%s",a[i].lastname);
scanf("%d",&a[i].age);
scanf("%d",&a[i].innings);
scanf("%d",&a[i].averagerun);
}
printf("\n");
for(i=0;i<n;i++){
printf("%s\n",a[i].firstname);
printf("%s\n",a[i].lastname);
printf("%d\n",a[i].age);
printf("%d\n",a[i].innings);
printf("%d\n",a[i].averagerun);
}

return 0;
}

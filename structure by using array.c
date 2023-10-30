#include <stdio.h>
#include <string.h>
int main()
{ int i,n;
typedef struct pokemon{
int hp;
int attack;
int speed;
char tier;
char name[15];
}pokemon;
pokemon a[2];
a[0].attack=100;
a[0].speed=80;
a[0].tier='A';
strcpy(a[0].name,"harshit");
a[1].attack=150;
a[1].speed=90;
a[1].tier='B';
strcpy(a[1].name,"anand");
for(i=0;i<2;i++){
printf("%d\n",a[i].attack);
printf("%d\n",a[i].speed);
printf("%c\n",a[i].tier);
printf("%s\n",a[i].name);
}


    return 0;
}

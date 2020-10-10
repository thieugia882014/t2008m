#include<stdio.h>
#include <cmath>
int main()
{
float n,l;
int t;
float tong;
printf("tien von: \n",n);
scanf("%f",&n);
printf("so lai: \n",l); 
scanf("%f",&l);
printf("so nam: \n",t);
scanf("%d",&t);
for (int i=0; i<t;i++)
{
tong =(n*l)/100;
n+=tong;
printf("so tien thu duoc %d: %f\n",i+1,tong);
printf("so tien thu duoc = %f\n",i+1,tong);
   }
}

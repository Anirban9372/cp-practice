#include<stdio.h>
#include<math.h>
int main(){
    double n,m,a; 

scanf("%lf%lf%lf",&m,&n,&a);
long long x =(long long) ceil(m/a)*(long long) ceil(n/a);
printf("%lld",x);

    return 0;
}

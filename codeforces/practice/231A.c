#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int solved = 0;
for(int i = 0;i<n;i++){
   int a, b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a+b+c==2 || a+b+c==3){
    solved++;
   }
}

printf("%d",solved);

    return 0;
}
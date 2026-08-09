#include<stdio.h>
int main(){
    int n;
    int x=0;
   scanf("%d",&n);
   char op[5];
   for(int i=0;i<n;i++){
    scanf("%s",op);
    if(op[1]=='+'){
        x++;
    }
    else{
        x--;
    }
   }
   printf("%d",x);
    return 0;
}
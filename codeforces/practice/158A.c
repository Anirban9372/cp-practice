#include<stdio.h>
int main(){
int n,k,count=0;
scanf("%d%d",&n ,&k);
int numbers[1000];
for(int i=0;i<n;i++){
    scanf("%d",&numbers[i]);
}
for(int i=0;i<n;i++){
if(numbers[i]>0 && numbers[i]>=numbers[k-1]){
count++;
}
}
printf("%d",count);
    return 0;
}
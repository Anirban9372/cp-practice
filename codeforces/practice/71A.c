#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char word[105]; int n;
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%s",word);
int len = strlen(word);
if (len>0 && len<11){
    printf("%s\n",word);
}
else if(len>10 && len<101){
    printf("%c%d%c\n",word[0],len-2,word[len-1]);
}

}
return 0;
}
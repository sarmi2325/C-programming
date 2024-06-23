CODE:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fn(char *str){
    int values[256]={0};
    values['I']=1;
    values['V']=5;
    values['X']=10;
    values['L']=50;
    values['C']=100;
    values['D']=500;
    values['M']=1000;
    
    int res=0;
    for(int i=0;str[i];i++){
        if(values[str[i]]<values[str[i+1]]){
            res-=values[str[i]];
        }
        else{
            res+=values[str[i]];
        }
    }
    return res;
}
int main(){
    char str[1001];
    scanf("%s",str);
    printf("%d",fn(str));

    return 0;
}

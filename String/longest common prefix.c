CODE:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* fn(char **str,int n){
    if(n<=0){
        return "";
    }
    char *prefix=(char*)malloc(strlen(str[0])+1*sizeof(char));
    strcpy(prefix,str[0]);
    for(int i=1;i<n;i++){
        char *temp=(char*)malloc(strlen(prefix)+1*sizeof(char));
        int j=0;
        while(prefix[j]&&str[i][j]&&prefix[j]==str[i][j]){
            temp[j]=prefix[j];
            j++;
        }
        temp[j]='\0';
    
    strcpy(prefix,temp);
    free(temp);
    }
    return prefix;
    
}
int main(){
    int n;
    scanf("%d",&n);
    char **str=(char**)malloc(n*sizeof(char*));
    getchar();
    for(int i=0;i<n;i++){
        str[i]=(char*)malloc(100*sizeof(char));
        fgets(str[i],100,stdin);
        
    }
    char *result=fn(str,n);
    printf("%s",result);
    for(int i=0;i<n;i++){
        free(str[i]);
    }
    free(str);
    free(result);
    return 0;
}

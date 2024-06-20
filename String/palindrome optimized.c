#include <stdio.h>
#include<string.h>

int main() {
    char str[1001];
    scanf("%s",str);
    int flag=0;
    int n=strlen(str);
    for(int i=0;i<n/2;i++){
        if(str[i]==str[n-1-i]){
            flag=1;
        }
        else{
            flag=0;
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}

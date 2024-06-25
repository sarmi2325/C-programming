/*PANAGRAM:

Input: “The quick brown fox jumps over the lazy dog” 
Output: is a Pangram 
Explanation: Contains all the characters from ‘a’ to ‘z’] 
*/

CODE:

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[1001];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int arr[26]={0},a,count=0;
    for(int i=0;i<len;i++){
        str[i]=tolower(str[i]);
        if(str[i]>='a' && str[i]<='z'){
            a=str[i]-'a';
        }
        arr[a]=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==1){
            count++;
        }
    }
    if(count==26){
        printf("Panagram");
    }
    else{
        printf("Not a Panagram");
    }
    return 0;
}

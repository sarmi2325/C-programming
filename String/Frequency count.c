/*Problem Description

Given a string, find the frequencies of each of the characters in it. The input string contains only lowercase letters. The output string should contain a letter followed by its frequency, in the alphabetical order (from a to z).

Example

Input

babdc

Output

a1b2c1d1

Explanation

In the input string 'a' appears once, 'b' appears twice, 'c' and 'd' appear once. Therefore, in alphabetical order the output should be: a1b2c1d1
*/

CODE:

#include<stdio.h>
int main(){
    char str[1001];
    scanf("%s",str);
    int count=0;
    for(int i=0;str[i];i++){
        for(int j=i+1;str[j];j++){
            if(str[i]>str[j]){
                str[i]=str[i]+str[j]-(str[j]=str[i]);
            }
        }
    }
    for(int i=0;str[i];i++){
        if(str[i]==str[i+1]){
            count+=1;
        }
        else{
            count+=1;
            printf("%c%d",str[i],count);
            count=0;
        }
        
    }
  return 0;
}


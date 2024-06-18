/*Problem statement

SecretMessage agency provides message encoding and decoding services for secure data transfer. 
The first step in decoding includes the removal of special characters from the message, as special characters and whitespaces do not hold any meaning.

Write an algorithm to help the agency find the number of special characters in a given message.

Example 

Input

gasg!g54@#vscsdls*

Output

4

Explanation

The special characters having no meaning are ['@', '#', '!', '*']
  */

CODE:

#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    int count=0;
    
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || 
        (str[i]>='0' && str[i]<='9' )) ){
            count1++;
        }
      
       
    }
    
    printf("%d",count);
}

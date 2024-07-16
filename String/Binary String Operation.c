/*Problem Description :
The Binary number system only uses two digits, 
0 and 1 and number system can be called binary string. 
You are required to implement the following function:

The function accepts a string str as its argument. 
The string str consists of binary digits eparated with an alphabet as follows:

    – A denotes AND operation
    – B denotes OR operation
    – C denotes XOR Operation

Input:
str: 1C0C1C1A0B1

Output:
1

*/

CODE:

#include <stdio.h>

int main()
{
   char s[1001];
   scanf("%s",s);
   int j=s[0]-'0';
   for(int i=0;s[i];i++){
       if(s[i]=='A'){
           j=j&(s[i+1]-'0');
       }
       else if(s[i]=='B'){
           j=j|(s[i+1]-'0');
           
       }
       else if(s[i]=='C'){
           j=j^(s[i+1]-'0');
       }
   }
   printf("%d",j);
   

    return 0;
}

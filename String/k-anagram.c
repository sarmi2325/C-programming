/*Given two strings of lowercase alphabets and a value k, the task is to find if two strings are K-anagrams of each other or not.
Two strings are called k-anagrams if following two conditions are true. 

Both have same number of characters.
Two strings can become anagram by changing at most k characters in a string.
Examples :  

Input:  str1 = "anagram" , str2 = "grammar" , k = 3
Output:  Yes
Explanation: We can update maximum 3 values and 
it can be done in changing only 'r' to 'n' 
and 'm' to 'a' in str2.*/

CODE:

#include<stdio.h>
#include<string.h>

int main() {
  char str[1001],str1[1001];
  scanf("%s %s",str,str1);
  int k,count=0,len,len1,c=0;
  scanf("%d",&k);
  len=strlen(str);
  len1=strlen(str1);
  if(len==len1){
      for(int i=0;str[i];i++){
          for(int j=0;str1[j];j++){
              if(str[i]==str1[j] && str[i]!='#'){
                  str1[j]='#';
                  c=1;
              }
          }
          if(c==1){
              str[i]='#';
              c=0;
          }
      }
  }
  for(int i=0;i<len;i++){
      if(str[i]!='#'){
          count++;
      }
  }
  if(count<=k){
      printf("Yes");
      return 0;
  }
  printf("No");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int isPalindrome(char *str, int n)
{
 
 int start_index = 0;
 
 
 int last_index = n-1;
 
 while(start_index < last_index && str[start_index] == str[last_index])
 {
 
  start_index++;
  last_index--;
 }
 
 if(start_index < last_index)
 {
  
  cout<<"NOT A PALINDROME"<<endl;
  return 0;
 }
 else
 {
  
  cout<<"PALINDROME"<<endl;
  return 1;
 }
}

int main(void)
{
 char *s1 = "atsaXaba";
 char *s2 = "basaxnt";
 char *s3 = "abababababbabXbababbbbabba";
 
 int x;
 x = isPalindrome(s1,7);
 x = isPalindrome(s2,13);
 x = isPalindrome(s3,27);
 return 0;
}
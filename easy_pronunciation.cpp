/*Easy Pronunciation
Problem Code:
EZSPEAK
Codechef Contest Code:
LTIME110
Difficulty Rating:1000

https://www.codechef.com/submit/EZSPEAK

Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 44 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.
*/

#include <iostream>
using namespace std;

int main() {
int t,n,i,j,cnt=0;

cin>>t;
for(i=1;i<=t;i++){
  
    cin>>n;
    string s; 
    
    /* if we declare string here as char s[n]; then we wont be able to pass one test case and that were cp comes into role. 
    My code was wrong at first coz i did the same mistake and then I learnt that declaring string like this will take up more
    space which is not in limits as declared in question */ 
    
    
    
    cin>>s;
    cnt=0;
    for ( j =0; j<n;j++)
    {
       if ((s[j] =='a') ||( s[j]=='e')||(s[j] =='i' )|| (s[j]=='o')||(s[j] =='u' ))
                  cnt =0;
        else {
             cnt++;
             if (cnt==4) 
                  {cout <<"NO"<<"\n";
                  cnt=-1;
                  break;}
        }
    }
    
    if (cnt!=-1)
      cout <<"YES"<<"\n";
      

    
}// your code goes here
	return 0;
}

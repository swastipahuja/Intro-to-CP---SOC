/*Slow Solution
Problem Code:
SLOWSOLN
Codechef Contest Code:
JULY221
Difficulty Rating:1003

https://www.codechef.com/submit/SLOWSOLN?tab=statement
*/

#include <iostream>
using namespace std;

int main() {
int t,tm,nm,sn,s,i;
int count;
cin>>t;
for(i =1; i<=t;i++){
    s =0;
    count =0;
    cin>>tm;
    cin>>nm;
    cin>>sn;

    while((sn>=nm) &&(count<tm))
    {
        if(sn>=nm){
            s = (s + (nm*nm));
            sn= sn-nm;
            count ++;
        }

    }
       if((sn!=0)&&(count<tm))
            {s = (s+ (sn*sn));
            }
        cout<<s<<"\n";


}// your code goes here
	return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n ;
   int k ;
   cin >> n >> k ;
   
   string s ;
   cin >> s;
   
   int count[256];
   memset(count  ,0 , sizeof count);
   for(int i =0 ; i < k ; i++){
       char x ;
       cin >> x;
       
       count[x-'0'] = 1;
   }
   
   int start =0;
   long long ans =0;
   long long len =0;
   int i ;
   for( i =0 ; i < n ; i++){
       if(count[s[i] -'0'] != 1){
           len = i-start;
           ans += len*(len+1)/2;
           start = i+1;
       }
   }
   len = i -start;
   ans += len*(len+1)/2;
   cout<<ans<<"\n";
   return 0;
}
// Your task is to determine if Masha can construct a square of size m×m which is a symmetric matrix and consists of tiles she has. 
// Masha can use any number of tiles of each type she has to construct the square. Note that she can not rotate tiles, 
// she can only place them in the orientation they have in the input.

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int T;
   cin >>T;
   while(T--){
       int n ;
       int m ;
       //cout<<"test case number:"<<T<<"\n";
       cin >> n >> m;
       //cout<<"n ="<<n<<"  m ="<<m<<"\n";
       int topright ;
       int topleft;
       int bottomright;
       int bottomleft;
       int i =0;
       bool flag = true;
       while(i < 2*n){
            cin >> topleft>> topright;
            cin>>bottomleft>>bottomright;
            if(topright == bottomleft  && m%2 ==0 && flag){
                cout<<"YES"<<"\n";
                flag = false;
                
                   
            }
            i+=2;
        }
        if(flag){
            cout<<"NO"<<"\n";
        }
        //cout<<"------------------"<<"\n";
       
   }
   
   
   return 0;
}
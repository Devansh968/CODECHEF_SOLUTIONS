#include <bits/stdc++.h>
using namespace std;


   void func(){
   int n;
   cin >>n;
   vector<int>arr(n,0);
   int ind1,indn;
   for(int i=0;i<n;i++){

    cin >> arr[i];
    if(arr[i]==1) ind1=i;
    if(arr[i]==n)indn=i;
  }
   int res=0;
   if(ind1==0 && indn==n-1)res=0;
   else if(ind1==0 and indn != n-1)res= n-1-indn;
   else if(ind1!=0 and indn ==n-1)res = ind1;
   else{
  
        res = n-1-indn+ind1;
        if(indn<ind1) res -= 1;
   }
         cout << res << endl;
}
signed main(){
   
    int t;
    t=1;
    cin>>t;
    while(t--){
        func();
   }
   
   
}
      


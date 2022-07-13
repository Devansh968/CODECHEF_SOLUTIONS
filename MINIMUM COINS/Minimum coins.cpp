#include <iostream>
using namespace std;

int main() {
  int  t;
  cin>>t;
  
  while(t--)
  {
     int x;
     cin>>x;
     int n  = x%10;
     if(x%10 != 0)
     {
        cout<<n<<endl;
     }
     else if(x%10 ==0 )
     {
        cout<<"0"<<endl;
     }
       else
     {
        cout<<x<<endl;
     }
     
     
  }
	return 0;
}

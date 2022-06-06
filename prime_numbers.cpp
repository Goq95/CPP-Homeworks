#include <iostream>
using namespace std;
int main() {
  int x;
  cin >>x;
  if(x>3)
  {
  cout<<2<<" "<<3<<" ";
  int z=3;  
    while(x>=z)
    {
    int y=z/2;
      while(x>=z)
      {
        if( z%y==0)
          {
            z+=2;
            break;
          }
        else if(y==2)
          {
            cout<<z<<" ";
            z+=2;
            break;
          }
        y-=1;
      }
    }
  }
  else if(x==2)
  {
    cout<<2;
  }
  else if(x==3)
  {
    cout<<2<<" "<<3<<" ";
  }
}
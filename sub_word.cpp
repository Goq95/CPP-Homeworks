#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
const int size=21;
char arr[size],x[size],y[size];
cin>>arr>>x;

{
  int k = strlen(arr);
  int r = strlen(x)-1;
  for(int i=0;i<k;++i)
  {
    int z=i;
    if(arr[i]==x[0])
    {
      while(z<k  )
      {
        cout<<arr[z];
        ++z;
      }
     cout<<endl;
    }
    
  }
  
}
}

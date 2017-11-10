#include <iostream>
using namespace std;
int main()
{
  int x=1;
  if(x<=5)
    {while (x<=5)
	{x=x+2;}
      if (x%3==0)
	{x=x+2;}
      else{
	cout<<x<<endl;}
    }
  if (x>5){}
  return 0;
}

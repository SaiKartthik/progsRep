#include<iostream>
using namespace std ;

int fac(int n)
{
  int prod = 1 ;
  for(int i = 1 ; i<=n ; i++)
  {
    prod = prod * i ;
  }
  return prod ;

}

int main()
{
  int temp ;
  int i = 0 ;
  int div ;
  int sum = 0 ;
  int x = 160 ;
  do {
    temp = x%10;
      sum = sum + fac(temp);
      x = x/10;
      i = i+1;
      cout<<i<<"\n";
    /* code */
  } while(x>=1);
  // while(x>=1)
  // {
  //   temp = x%10;
  //   sum = sum + fac(temp);
  //   x = x/10;
  //   i = i+1;
  //   cout<<i<<"\n";
  // }
  // cout<<sum;
  // int s = fac(5);
  // cout<<s ;

  if(sum = x)
    cout<<"valid";

  else
    cout<<"Invalid";

  return 0;
}

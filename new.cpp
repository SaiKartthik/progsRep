#include<iostream>
using namespace std ;
int comp(int x,int y)
{
  if(x==y)
    return 1 ;
  else
    return 0 ;
}

int chk(int c,int b[],int k)
{
    int i;
    for(i=0;i<k;i++)
    {
        // cout<<"b :"<<b[i]<<" c "<<c;
    if (c!=b[i])
      {
        return 0;
      }
    else
    {
        return 1 ;
    }
    }
     return 0 ;
}
int main()
{
    int y = 0 ;
  int b[10];
  int c ;
  int k ;
  int out = 0 ;
  int skip = 0;
  int sum;
  int a[3][5] = {{5,5,3,4,3},{0,13,3,6,8},{6,0,0,7,13}};
  for(int i = 0 ; i < 3 ; i++)
  {
    for(int j = 0 ; j < 5 ; j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"\n";
  k = 0;

  for(int i = 0 ; i < 3 ; i++)
  {
    for(int j = 0 ; j < 5 ; j++)
    {
      c = a[i][j] ;
    //   cout<<chk(c,b,k) << " compared \n" ;
      if (chk(c,b,k) != 0)
      {
        //   cout<<"break \n";
          continue;
      }
      else
      {
        b[k] = c;
        k=k+1;
      int sum = 0 ;
      for(int k = i; k < 3 ; k++)
      {
        for(int l = j ; l < 5 ; l++)
        {
          if(c == a[k][l])
            sum = sum + comp(c,a[k][l]);
            cout<< "sum is" << sum <<"\n";
        }
      }
      if(sum >= 2)
      {
         cout<<a[i][j]<<" = "<<sum <<"\n";
         out = out + sum ;
      }
      }
    }
  }
  cout<<"sum is"<<out<<"\n";
  cout<<"Value of K is "<<k ;



return 0 ;
}

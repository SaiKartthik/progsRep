//To print sum f numbers from the substring formed by a given number ex : 1 2 3
// 1+2+3+12+13+23
#include<iostream>
#include<string>
// #include<"string">
using namespace std;
int main()
{

  string x ;
  cout<<"Enter a number :";
  cin>>x;
  int sum = 0 ;
  char ch,ch1;
  int y ;
  string z = "";
  y = x.length();
  int num = stoi(x);
  int count = 0;
  // cout<<num ;
  cout<<"possible substrings are :"<<"\n" ;
  for(int i = 0 ; i < x.length() ; i++)
  {
    ch = x[i] ;
    z = z + ch ;
    cout<<z<<"\n";
    sum = sum + stoi(z);
    for(int k = i+1 ; k < x.length() ; k++)
    {
      ch1 = x[k] ;
      z = z + ch1 ;
      sum = sum + stoi(z);
      cout<<z<<"\n" ;

    }
    z = "";
  }
  cout<<"Sum is "<<sum ;

}

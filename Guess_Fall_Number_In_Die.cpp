#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int num;
  int guess;
  while(true)
  {
    num=(rand()%6)+1;
    cout<<"Guess the Rolled Die:";
    cin>>guess;
    if(num==guess)
    {
      cout<<"CORRECT"<<endl;
      return 0;
    }
    else
    {
      cout<<"Incorrect"<<endl;
    }
  }
}

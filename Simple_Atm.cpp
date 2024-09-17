#include<iostream>
using namespace std;
int main()
{
  int option;
  int balance=2000;
  int deposit;
  int withdraw;
  char display;
  cout<<"\t\tWELCOME TO ATM"<<endl;
  while(true)
  {
  cout<<"1.Balance Enquiry 2.Deposit 3.Withdraw 4.Exit :";
  cin>>option;
  switch(option)
  {
    case 1:
    cout<<"Available Balance : "<<balance<<endl;
    break;
    case 2:
    cout<<"Enter Amount to Deposit: ";
    cin>>deposit;
    cout<<deposit<<" Deposited Successfully"<<endl;
    balance+=deposit;
    jump:
    cout<<"Would you like to display the balance? Y.Yes N.No:";
    cin>>display;
    if(display=='Y'||display=='y')
    {
      cout<<"Available Balance :"<<balance<<endl;
    }
    else if(display=='N'||display=='n')
    {
      cout<<"\t\tTHANK YOU VISIT AGAIN"<<endl;
      return 0;
    }
    else
    {
      cout<<"Invalid choice"<<endl;
      cout<<"\t\tTHANK YOU VISIT AGAIN"<<endl;
      return 0;
    }
    break;
    case 3:
    cout<<"Enter Amount to Withdraw:"<<endl;
    cin>>withdraw;
    if(withdraw<=balance)
    {
    balance-=withdraw;
    cout<<"Withdraw Successful"<<endl;
    goto jump;
    }
    else
    {
      cout<<"INSUFFICIENT FUNDS !!!"<<endl;
    }
    break;
    case 4:
    cout<<"\t\tTHANK YOU VISIT AGAIN"<<endl;
    return 0;
    break;
    default:
    cout<<"Invalid Choice"<<endl;
    cout<<"\t\tTHANK YOU VISIT AGAIN"<<endl;
    return 0;
    break;
  }
  }
}

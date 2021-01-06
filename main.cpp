#include <iostream>

using namespace std;

int choice;
class operation
{
    int num1,num2,result;
public:
    operation()
    {
        cout<<"\n Enter number 1: ";
        cin>>num1;
        cout<<"\n Enter number 2: ";
        cin>>num2;
    }

void get()
{
        cout<<"\n Enter number 1: ";
        cin>>num1;
        cout<<"\n Enter number 2: ";
        cin>>num2;
}
void addition()
{
    result=num1+num2;
    cout<<"\nSum of "<<num1<<" and "<<num2<<" is "<<result;
}
void multiplication()
{
    result=num1*num2;
    cout<<"\nProduct of "<<num1<<" and "<<num2<<" is "<<result;
}
void subtraction()
{
    result=num1-num2;
    cout<<"\nDifference of "<<num1<<" and "<<num2<<" is "<<result;
}
void division()
{
    result=num1/num2;
    cout<<"\nQuotient of "<<num1<<" and "<<num2<<" is "<<result;
}
void mod()
{
    result=num1%num2;
    cout<<"\nRemainder of "<<num1<<" and "<<num2<<" is "<<result;
}

~operation()
{
    cout<<"\n Destructor called! \n Ending the program....";
}

};
int main()
{
  cout<<"\t---------------------*CALCULATOR*---------------------\n\n";
  cout<<" 1.addition \n 2.multiplication \n 3.subtraction \n 4.division \n 5.mod \n";
  cout<<"\nEnter the choice of operation you want to perform respectively: \n";
  cin>>choice;
  operation opr;

  int flag=1;
  while(flag!=9){

  if(flag==0){
    cout<<"\nEnter the choice of operation you want to perform respectively: \n";
    cin>>choice;
    opr.get();
  }

  switch(choice)
  {
      case 1:opr.addition();
             break;
      case 2:opr.multiplication();
             break;
      case 3:opr.subtraction();
             break;
      case 4:opr.division();
             break;
      case 5:opr.mod();
             break;
      default:
        cout<<"Invalid choice!!";
        break;
  }

  cout<<"\nDo you want to perform another operation?";
  cout<<"\nEnter 0 for YES and 9 for NO\n";
  cin>>flag;

}
}

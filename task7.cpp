#include <iostream>
using namespace std;
int sum(int number);
main()
{
 int number;
 cout<<"enter a number:"<<endl;
 cin>>number;
 int addition=sum(number);
  cout<<addition;
}
int sum(int number)
{
 int result2=0;
while(number!=0)
 {
    int result1=number%10;   
    result2=result1+result2;
    number=number/10;
 }

return result2;




}
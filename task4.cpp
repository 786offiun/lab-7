#include <iostream>
using namespace std;
main()
{

int number;
cout<<"enter a number:"<<endl;
cin>>number;
for(int a=1; a<=number; a++)
{
int previous=0;
int current=1;
int next;

next=previous+current;
cout<<next;
next=current;
current=previous;





}

cout<<previous<<"  "<<current<<"  ";


}
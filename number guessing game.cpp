#include<iostream> 
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  
  int number = (rand() %100  + 1);    //0-99 + 1->1-100
  int guess = 0;
  do
  {
  cout<<"enter guess(1-100): ";
  cin>>guess;
  if(guess>number)
  {
  cout<<" guess lower!"<<endl;
}
else if(guess<number)
{
cout<<"guess higher!"<<endl;
}
else
{
cout<<"you won!"<<endl;
}
}while (guess !=number);  
return 0;
}

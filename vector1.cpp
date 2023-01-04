#include<iostream>

using namespace std;
int main()
{
   //Change provider
   //1 dollar = 100 cents
   //1 quarter = 25 cents
   //1 dimes = 10 cents
   //1 nickel = 5 cents
   //1 pennies = 1  cents
   int amount {0};
   int dollar,quater,dimes,nickel,pennies = 0;
   cout<<"Enter the amount in cents (USD) : ";
   cin>>amount;
   cout<<"You can provide change as :"<<endl;
   dollar = amount /100;
   amount-= (dollar*100);
   quater = amount /25;
   amount-= (quater*25);
   dimes = amount /10;
   amount -= (dimes*10);
   nickel =  amount/5;
   amount -= (nickel*5);
   pennies = amount;

   cout<<"Dollars : "<<dollar<<endl;
   cout<<"Quaters : "<<quater<<endl;
   cout<<"Dimes : "<<dimes<<endl;
   cout<<"Nickel : "<<nickel<<endl;
   cout<<"Pennies : "<<pennies<<endl;
   return 0;




}
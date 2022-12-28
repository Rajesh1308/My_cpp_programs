#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //Declaring two vectors vector1 and vector2
   vector<int> vector1;
   vector<int> vector2;

   //adding values 10 and 20 to vector1
   vector1.push_back(10);
   vector1.push_back(20);

   //Displaying the elements of the vector1
   cout<<"\nElement at 0 is "<<vector1.at(0);
   cout<<"\nElement at 1 is "<<vector1.at(1);

   //Adding values 100 and 200 to vector2
   vector2.push_back(100);
   vector2.push_back(200);

   //Displaying the elements of vector2
   cout<<"\nElement at 0 is "<<vector2.at(0);
   cout<<"\nElement at 1 is "<<vector2.at(1);

   //Displaying size of eact vectors -> vector1 and vector2
   cout<<"\nThere are "<<vector1.size()<<" elements in vector1";
   cout<<"\nThere are "<<vector2.size()<<" elements in vector2"<<endl;

   //Declaring a 2D vector -> vector_2d
   vector<vector<int>> vector_2d;

   //Adding vector1 and vector2 to vector_2d 
   vector_2d.push_back(vector1);
   vector_2d.push_back(vector2);

   //Displaying elements of vector_2d 
   cout<<"The elements of 2D vector"<<endl;
   cout<<vector_2d.at(0).at(0)<<endl;
   cout<<vector_2d.at(0).at(1)<<endl;
   cout<<vector_2d.at(1).at(0)<<endl;
   cout<<vector_2d.at(1).at(1)<<endl;

   //Changing the value of vector1 at position 0
   vector1.at(0) = 1000;
   cout<<"Modified value of vector1 at position 0"<<endl;

   //Displaying vector_2d after modifying vector1
   cout<<"The elements of 2D vector"<<endl;
   cout<<vector_2d.at(0).at(0)<<endl;
   cout<<vector_2d.at(0).at(1)<<endl;
   cout<<vector_2d.at(1).at(0)<<endl;
   cout<<vector_2d.at(1).at(1)<<endl;

   //Displaying elements of vector1
   cout<<"\nElement at 0 is "<<vector1.at(0);
   cout<<"\nElement at 1 is "<<vector1.at(1);

   return 0;

}
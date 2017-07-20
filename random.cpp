#include<iostream>
#include<stdlib.h>
#include<ctime>

int main()
{
  srand(time(0)); // change or erase this, to see the changes that produces in the result!

  for ( int i= 0; i< 10; i++)
    std::cout<<rand()<<std::endl;

 }


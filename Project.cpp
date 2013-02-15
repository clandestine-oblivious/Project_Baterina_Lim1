#include "Project.h"
#include <iostream>
using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiples_of_3_and_5(){

    cout << "Computing..." << endl;


 int i;
       int sum=0;
    for(i=0; i<1000; i++)
    {
              if ((i%3)==0 || (i%5)==0){
              sum=sum+i;}
    }
    cout << "The sum of the Multiples of 3 and 5 is: " << sum <<endl;
}

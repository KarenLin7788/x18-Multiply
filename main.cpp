//Author: Xinru Lin
#include<vector>
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()

{
int cols;
int row;
std::vector<vector<int> >cols1;
std::vector<vector<int> >row1;
    cout<<"Here is the Multiplication table:" << endl;
     
    for(cols=1;cols<=12;cols++)
  {
    for(row=1;row<=12;row++)
    {
         if(cols*row<=9)
         {
         cout<< cols*row<< "   " ;
         }
         if(10<=cols*row && cols*row <=99)
         {
         cout<< cols*row<< "  ";
         }
         if(100<=cols*row && cols*row<=999)
         { 
         cout<<cols*row<<" ";
         }


    }
    cout << endl;
  }

return 0;
}


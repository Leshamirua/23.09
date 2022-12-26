#include <iostream>
#include<time.h>
#include "Steck.h"
using namespace std;


int main() {
    srand(time(0));
    Steck ST;
    Steck ST2;

    string str = "({x-y-z}*[x+2y]-(z+4x))"; 
    string str2 = "([x-y-z}*[x+2y)-{z+4x)]";
  
    ST.ChekSteck(str);
    cout << "---------------" << endl;
    ST2.ChekSteck(str2);
    

  
}


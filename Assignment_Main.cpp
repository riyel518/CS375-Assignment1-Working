#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Hfiles.h"
#include <string>
#include <fstream>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	 startStack autos;
	 startStack vans;
      string files;
   
    ifstream fileInput;

      autos.topNode = NULL;
      autos.counter = 0;
      vans.topNode = NULL;
      vans.counter = 0;
      
    fileInput.open("test.txt");
    

      
    fileInputs (fileInput, autos,  vans);
  

	  toString(autos);


       cout << "counter " << autos.counter << endl;

      

	  cin.get();

      return 0;
}

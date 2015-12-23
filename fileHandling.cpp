#include <iostream>
#include <fstream>
#include "Hfiles.h"
#include "Stack.h"


void fileInputs (ifstream& fileInputd, startStack& autos, startStack& vans ){


    inputData tempData;                  

 
 	

 
                       
                     
      do{

      
        fileInputd >> tempData.types >> tempData.licenses >> tempData.capacity;  
        push(autos, tempData.types,  tempData.licenses, tempData.capacity);  
         
		  
 

    }while (fileInputd >> tempData.types);
                              
       fileInputd.close();

}







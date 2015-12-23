#include <iostream>
#include "Stack.h"
#include <string>
using namespace std;



void createEmptyStack(startStack& topStack){
 	
     vehicle *temps;
     
     while (topStack.topNode != NULL) {
         
         temps = topStack.topNode;
         topStack.topNode = topStack.topNode->nextVehicle;
         delete temps;
         topStack.counter--;
     }
     
}

void push(startStack& topStack, string vehicleType,  string vehicleLicens, int  vechicleCap){
                
            vehicle *vehicles; 
                  
            vehicles = new  vehicle;
            vehicles->vehicleType =   vehicleType;
            vehicles->vehicleLicencse = vehicleLicens;
            vehicles->vechicleCapacity = vechicleCap;
            vehicles->nextVehicle = topStack.topNode;
            topStack.topNode = vehicles;
            topStack.counter++;
      
 		
        


}

void pop(startStack& topStack) {

    vehicle *top;
    vehicle *temp;
    
    top = topStack.topNode;
    
	

              if(isEmptyStack(topStack)){
              
                cout << "Stack is empty! Nothing to remove" << endl; 

              }

              else {
                            
                  
                temp = top;
                top = top->nextVehicle;
                delete temp;
                topStack.topNode = top;
                topStack.counter--;
                

             }
 
        }
        
bool isEmptyStack(startStack topStack){

    if (topStack.topNode == NULL) 
        
        return true;
        
    else
        
        return false;
 

}

bool isFullStack() {

   	   bool heaps;
       
       vehicle * temps = new (nothrow) vehicle;
       
       if (temps == NULL){
           heaps = true;
           
       }
        else {
            
            heaps = false;
            delete temps;
            
        }
        
        return heaps;
}


int getsStackCount(startStack topStack){
	

      return topStack.counter;
}
                                 

void toString (startStack topStack){
    
      startStack temp;
      string myCapcity;
      string code;
      
      temp = topStack;
   
   while(temp.topNode != NULL) {
       
       myCapcity = temp.topNode->vehicleLicencse; 
       code = temp.topNode->vehicleType;
       cout << "vehicle type is " << myCapcity <<  "  code is " << code << endl;
       temp.topNode = temp.topNode->nextVehicle;
       
       
   }
    
    
    
    
}

#ifndef STACK_H
#define STACK_H
#include <string>
using namespace std;


const int counterNone = 0;


struct vehicle {

	std::string vehicleType;
	std::string vehicleLicencse;
	int  vechicleCapacity;
	vehicle *nextVehicle;	
};



struct startStack {

           vehicle *topNode;
           int counter;

};


void createEmptyStack(startStack& topStack);
void push(startStack& topStack, string vehicleType,  string vehicleLicens, int vechicleCap);
void pop(startStack& topStack);
bool isEmptyStack(startStack topStack);
bool isFullStack();
int getsStackCount(startStack topStack);
void toString (startStack topStack);




#endif

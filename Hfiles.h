#ifndef HFILES_H
#define HFILES_H
#include <string>
#include "Stack.h"


struct inputData {

            string types;
            char secTypes;
            std::string licenses;
            int capacity;

};


void fileInputs (ifstream& fileInputs, startStack& autos, startStack& vans );


#endif

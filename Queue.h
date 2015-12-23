#ifndef QUEUE_H
#define QUEUE_H

struct customerQueue {
    
    int numWaiting;
    customerQueue *nextNode;
    
};

struct startQueue {
    
     customerQueue *front;
     customerQueue *back;
     int queueCounter;
    

};


bool isEmptyQueue(startQueue& queueList);
bool isFullQueue(startQueue& queueList);
void createEmptyQueue(startQueue& queueList);
void enQueue(startQueue& queueList, int numWaitingCustomer);
int deQueue(startQueue& queueList);



#endif

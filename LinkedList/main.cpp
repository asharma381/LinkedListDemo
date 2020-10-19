//
//  main.cpp
//  LinkedList
//
//  Created by Aditya Sharma on 10/17/20.
//  Copyright © 2020 Aditya Sharma. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct Node{int data; Node *next;};
typedef Node* NodePtr;

void headInsert(NodePtr& head, int theNumber);
NodePtr search(NodePtr head, int target);

int main() {
    NodePtr list = new Node; // head
    list->data = 15;
    list->next = new Node;
    list->next->data = 3;
    list->next->next = NULL;
    cout << list->data << endl; // (*head).data
    cout << list->next->data << endl;
    
    headInsert(list, 12);
    
    cout << list->data << endl;
    cout << list->next->data << endl;
    
    NodePtr item = search(list, 2);
    cout << item->data << endl;
    return 0;
}

void headInsert(NodePtr& head, int theNumber){
    // Set up a new node
    NodePtr tempPtr = new Node;
    tempPtr->data = theNumber;
    
    // Link to head
    tempPtr->next = head;
    head = tempPtr;
}

NodePtr search(NodePtr head, int target){
    NodePtr here = head;
    if(here == NULL){
        return NULL;
    }else{
        while(here->data != target && here->next != NULL){
            here = here->next;
        }
        if(here->data == target){
            return here;
        }else{
            return NULL;
        }
    }
    return here;
}

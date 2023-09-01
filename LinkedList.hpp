//
//  LinkedList.hpp
//  FirstProgramReview
//
//  Created by Marthel Rodriguez on 8/31/23.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>
#include "Node.h"

class LinkedList{
private:
    Node *head;
    Node *tail;
    
    
public:
    //new node creator
    Node *createNewNode(int value);
    
    //functions for adding nodes to linked list
    void addNodeAtHead(Node *newNode);
    void addNodeAtTail(Node *newNode);
    void addNodeAtIndex(Node *newNode, int index);
    
    //functions for removing nodes from linked list;
    void removeNodeAtHead();
    void removeNodeAtTail();
    void removeNodeAtIndex(int index);
    void removeNodeWithValue(int value);
    
    //getters
    Node *getHead();
    Node *getTail();
    
    //operator overload for outputting the linkedList.
    friend std::ostream &operator<<(std::ostream &out, const LinkedList &list);
    //operator overload of [] for fetching the specified indexed value.
    //TODO: Later

};








#endif /* LinkedList_hpp */

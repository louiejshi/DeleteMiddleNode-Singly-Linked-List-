//
//  main.cpp
//  DeleteMiddleNode(SinglyLinkedList)
//
//  Created by Louie Shi on 7/30/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;


bool deleteMiddleNode(ListNode* ln)
{
    if((ln == NULL) || (ln->getNext() == NULL))
    {
        return false;
    }
    else
    {
        ln->data = ln->getNext()->getData();
        ln->next = ln->getNext()->getNext();
        return true;
    }
}



int main(int argc, const char * argv[])
{
    LinkedList* ls = new LinkedList();
    ListNode* deletedNode;
    int deletedVal = 3;
    
    ListNode* ln1 = new ListNode(1);
    ListNode* ln2 = new ListNode(2);
    ListNode* ln3 = new ListNode(3);
    ListNode* ln4 = new ListNode(4);
    ListNode* ln5 = new ListNode(5);
    ListNode* ln6 = new ListNode(6);
    
    ls->insertEnd(ln1);
    ls->insertEnd(ln2);
    ls->insertEnd(ln3);
    ls->insertEnd(ln4);
    ls->insertEnd(ln5);
    ls->insertEnd(ln6);
    
    ls->print();
    cout << endl;
    
    for(deletedNode = ls->head; (deletedNode->getData()) != deletedVal; deletedNode = deletedNode->getNext())
    {

    }

    cout << "Delete value is: " << deletedNode->getData() << endl;
    deleteMiddleNode(deletedNode);
    cout << endl;
    ls->print();
    
    return 0;
}

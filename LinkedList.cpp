#include "LinkedList.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
LinkedList::LinkedList()
{
    this->count = 0;
    this->head = NULL;
    this->tail = NULL;
  ;
}




void LinkedList::addEnd(Node* c)
{
    Node* n = new Node(c);
    if(this->count == 0)
    {
        this->head = n;
        this->tail = n;
    }
    else
    {
        n->setPrevNode(this->tail);
        this->tail->setNextNode(n);
        this->tail = n;
    }
    this->count++;
}

int LinkedList::getCount()
{
    return this->count;
}
void LinkedList::mergeSort(int* ar, int begin1, int end1, int begin2, int end2);
{
    int size = end2 - begin1 + 1;

    int temp[size];

    int pos1 = begin1;

    int pos2 = begin2;

    for(int i = 0; i < size; i++)

    {

        //how do we ask if pos1 points to a legal place on the left half of the list?

        if(pos1 <= end1 && pos2 <= end2)

        {

            if(pos1->getPrevNode()->getPayload(); < ar[pos2]->getNextNode())

            {

                temp[i] = pos1->getNextNode();

                pos->setNextNode();

            }

            else

            {

                temp[i] = pos2->getNextNode();

                pos2->setNextode();

            }

        }

        else if(pos1 <= end1)

        {

            temp[i] = pos1->getPrevNode();

            pos1++getPrevNode();

        }

        else

        {

            temp[i] = pos2->getPrevNode();

            pos2->setPrevNode();

        }

    }

    

    //temp is filled up with our values in the correct order

    //we need to now transfer those value back over to ar overwriting

    //the old contents of ar with the contents of temp between begin1 and end2

    int tempPos = 0;  // i dont know what to do here with nodes

    for(int i = begin1; i <= end2; i++)

    {

        ar[i] = temp[tempPos];

        tempPos++;

    }

    //now ar is overwritten between begin1 and end2 with the values in order

    //and this call to merge and mergesort can end;
 
}

//the job of this function is to sort the list from begin to end

void mergeSort(int* ar, int begin, int end)

{

    //displayArray(ar, begin, end);

    

    //we only need to do anything in here, if the list is bigger than a 1 list

    if(begin != end)

    {

        //we DO NOT HAVE A 1 LIST!!!!!

        //so we need to divide our list in half and call mergesort on each half

        int begin1 = begin;

        int end1 = (begin + end) / 2;

        int begin2 = end1 + 1;

        int end2 = end;

        mergeSort(ar, begin1, end1);

        mergeSort(ar, begin2, end2);

        

        //now the left half is sorted and the right half is sorted

        //we need to merge them together into a single sorted portion

        //of our list from begin to end 

        merge(ar, begin1, end1, begin2, end2);

    }

    

}

}

void LinkedList::display()
{
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        currNode->getPayload()->display();
        currNode = currNode->getNextNode();
    }
}

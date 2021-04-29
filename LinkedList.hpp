#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;
        int testCount;
        int currNode;
        Node* get(int index);
 

    public:
        LinkedList();
        void addEnd(Node* c);
        void display();
        int getCount();
        void mergeSort();
};


class Node
{
    private:
        
        Node* nextNode;
        Node* prevNode;

    public:
        Node(Node* payload);
        Node* getPayload();
        Node* getNextNode();
        Node* getPrevNode();
        void setNextNode(Node* n);
        void setPrevNode(Node* n);
        void display();
};
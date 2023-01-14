class Node
{
    public:
    int val;
    Node* next;
    Node(int x)
    {
        val=x;
        next=nullptr;
    }
};

class MyLinkedList {
public:
    int size;
    Node* head;
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index>=size || index<0)
        {
           return -1; 
        }
        Node* temp=head;
        for(int i=0;i<index;i++)
        {
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>size || index<0)
        {
            return;
        }
        Node* temp=head;
        Node*n=new Node(val);
        if(index==0)
        {
            n->next=head;
            head=n;
        }
        else
        {
            for(int i=0;i<index-1;i++)
            {
                temp=temp->next;
            }            
            n->next=temp->next;
            temp->next=n;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size || index<0)
        {
            return;
        }
        if(index==0)
        {
            Node* nextnode=head->next;
            delete head;
            head=nextnode;
        }
        else
        {
            Node* temp=head;
            for(int i=0;i<index-1;i++)
            {
                temp=temp->next;
            }
            Node* nextnode=temp->next->next;
            delete temp->next;
            temp->next=nextnode;            
        }
        size--;
    }

    ~MyLinkedList()
    {
        Node *p = head;
        while (head!=nullptr)
        {
            head= head->next;
            delete p;
            p=head;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
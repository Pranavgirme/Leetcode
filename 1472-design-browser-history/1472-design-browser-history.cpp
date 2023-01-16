class Node
{
    public:
    string s;
    Node* prev;
    Node* next;

    Node(string data)
    {
        s=data;
        prev=NULL;
        next=NULL;
    }
};
class BrowserHistory {
public:
    Node* current;
    BrowserHistory(string homepage) {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newnode=new Node(url);
        newnode->prev=current;
        current->next=newnode;
        current=newnode;
    }
    
    string back(int steps) {
        while(steps-- && current->prev)
        {
            current=current->prev;
        }
        return current->s;
    }
    
    string forward(int steps) {
        while(steps-- && current->next)
        {
            current=current->next;
        }
        return current->s;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
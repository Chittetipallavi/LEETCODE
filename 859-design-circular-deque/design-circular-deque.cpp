class MyCircularDeque {
public:
vector<int>q;
int size=0;
int capacity=0;
int front=0;
int rear=0;
    MyCircularDeque(int k) {
        capacity=k;
        size=0;
        q=vector<int>(capacity);
    }
    
    bool insertFront(int value) {
            if(isFull())
            {
                return false;
            }
            front=(front-1+capacity)%capacity;
            q[front]=value;
            size++;
            return true;
    }
    
    bool insertLast(int value) {
        if(isFull())
        {
            return false;
        }
        q[rear]=value;
        rear=(rear+1)%capacity;
        size++;
        return true;
        
    }
    
    bool deleteFront() {
        if(isEmpty())
        { 
            return false;
        }
        front=(front+1)%capacity;
         size--;
        return true;
        
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        rear=(rear-1+capacity)%capacity;
        size--;
        return true; 
    }
    
    int getFront() {
        if(isEmpty())
        {
            return -1;
        }
        return q[front];
    }
    
    int getRear() {
        if(isEmpty())
        {
            return -1;
        }
        return q[(rear-1+capacity)%capacity];
        
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
        
    }
    
    bool isFull() {
        if(size==capacity) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
class MyCircularQueue {
public:
    int front;
    int rear;
    int size;
    int capacity;
    vector<int> q;
    MyCircularQueue(int k) {
        front=0;
        rear=-1;
        size=0;
        capacity=k;
        q.resize(k);
        
    }
    
    bool enQueue(int value) {
        if(size==capacity){
            return false;
        }
        else{
            rear=(rear+1)%capacity;
            q[rear]=value;
            size++;
            return true;
        }
        
    }
    
    bool deQueue() {
        if(size==0){
            return false;
        }else{
            front=(front+1)%capacity;
            size--;
            return true;
        }
        
    }
    
    int Front() {
        if(!isEmpty()){
          return q[front];
        } 
        else{
            return -1;
        } 
        
    }
    
    int Rear() {
        if(!isEmpty()){
          return q[rear];
        }
        else{
            return -1;
        }
        
    }
    
    bool isEmpty() {
        if(size==0){
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool isFull() {
        if(size==capacity){
            return true;
        }
        else{
            return false;
        }


    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
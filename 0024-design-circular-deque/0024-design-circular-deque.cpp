class MyCircularDeque {
public:
    int k;
    vector<int> arr;
    int size=0;
    int front=0;
    int rear=0;
    MyCircularDeque(int k) {
        this->k = k;
        arr.resize(k);
        
        
    }
    
    bool insertFront(int value) {
        if(size<k){
            front=(front-1+k)%k;
            arr[front]=value;
            size++;
            return true;
        }
        else{
            return false;
        }
        

        
    }
    
    bool insertLast(int value) {
        if(size<k){
            arr[rear]=value;
            rear=(rear+1)%k;
            size++;
            return true;
                    
        }
        else{
            return false;
        }
    }
    
    bool deleteFront() {
        if(size!=0){
            front=(front+1)%k;
            size--;
            return true;

        }
        else{
            return false;
        }
    }
        
    
    
    bool deleteLast() {
        if(size!=0){
            rear=(rear-1+k)%k;
            size--;
            return true;
        }
        else{
            return false;
        }
        
    }
    
    int getFront() {
        if(size == 0) return -1;
        return arr[front];

        
    }
    
    int getRear() {
        if(size == 0) return -1;
        return arr[(rear - 1 + k) % k];
        
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
        if(size==k){
            return true;
        }
        else{
            return false;
        }
        
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
class CustomStack {
public:
    vector<int>stack;
    int pos;
    CustomStack(int maxSize) {
        stack=vector<int>(maxSize);
        pos=0;
    }
    
    void push(int x) {
        if(pos==stack.size())
        return;
        stack[pos]=x;
        pos++;
        
    }
    
    int pop() {
        if(pos==0)
        return -1;
        return stack[--pos];
    }
    
    void increment(int k, int val) {

        for(int i=0;i<min(pos,k);i++)
        stack[i]+=val;

        
    }
};
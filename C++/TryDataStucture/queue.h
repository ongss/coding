

#ifndef My_queue
#define My_queue

#include<vector>


namespace my{

template<typename T1>
class Q{
private:
    std::vector<T1> myqueue;
public:
    Q(){
       // myqueue = new std::vector<T1>();
    }

    Q(const Q<T1> &q){
        myqueue = q.myqueue;
    }

    void push(T1 item){
        myqueue.push_back(item);
    }

    T1 pop(){
        T1 tmp = myqueue.at(0);
        myqueue.erase(myqueue.begin());
        return tmp;
    }

    unsigned int size(){
        return myqueue.size();
    }

    T1 front(){
        return myqueue.at(0);
    }

    Q& operator= (const Q& o){
        myqueue = o.myqueue;
        return *this;
    }

    bool empty(){
        if(myqueue.size() == 0)  return true;
        return false;
    }
};
}
#endif // My_queue

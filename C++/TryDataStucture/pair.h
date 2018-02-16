#ifndef My_pair
#define My_pair

namespace my{

template<typename T1>
class myPair{
public:
    T1 first;
    T1 second;

    //method
    myPair(){
        first = T1();
        second = T1();
    }

    myPair(T1 f, T1 s){
        first = f;
        second = s;
    }

    myPair(const myPair<T1> &p){
        first = p.first;
        second = p.second;
    }

    bool operator>(const myPair<T1> &o) const{
        if(first == o.first) return  second > o.second;
        return first > o.first;
    }

    bool operator<(const myPair<T1> &o) const{
        if(first == o.first) return  second < o.second;
        return first < o.first;
    }

    bool operator==(const myPair<T1> &o) const{
        return (first==o.first && second==o.second);
    }


};


}



#endif // My_pair

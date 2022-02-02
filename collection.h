#ifndef COLLECTION_H
#define COLLECTION_H

#include <cstddef>
#include <iostream>
#include <stdexcept>
using namespace std;


template <typename Object>

class Collection {
    // TODO(student): the rest of the template
    public:
        Collection();
        Collection(const Collection&);
        ~Collection();
        Collection& operator=(const Collection&);
        size_t size() const;
        bool is_empty() const;
        void make_empty();
        void insert(const Object& obj);
        void remove(const Object& obj);
        bool contains(const Object& obj) const;

     private:
        size_t storage_size = 0;
        Object* Storage;



};

template <typename Object>
Collection<Object>::Collection(){
    Storage = nullptr;
}

//Question
template <typename Object>
Collection<Object>::Collection(const Collection&){}

//Question
template <typename Object>
Collection<Object>::~Collection(){}

//Question
template <typename Object>
Collection<Object>::Collection& operator=(const Collection&){}


template <typename Object>
size_t Collection<Object>::size() const{
    return storage_size;
}

template <typename Object>
bool Collection<Object>::is_empty() const{
    return (storage_size == 0);
}


//Question here
template<typename Object>
void Collection<Object>::make_empty(){
    ~Collection();
    cout << "the collection is now empty." << endl;
}

template<typename Object>
void Collection<Object>::insert(const Object& obj){
    storage_size++;
    Storage[storage_size-1] = obj;
}

//Question
template<typename Object>
void Collection<Object>::remove(const Object& obj){}

template<typename Object>
bool Collection<Object>::contains(const Object& obj) const{
    for(int i=0; i<storage_size; i++){
        if(Storage[i] == obj) return true;
    }
    return false;
}

#endif  // COLLECTION_H
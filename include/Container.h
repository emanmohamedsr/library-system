#ifndef CONTAINER_H
#define CONTAINER_H

#include <stdexcept>
#include <cassert>

template<typename T, template<typename> class Structure>

class Container
{
private:
    //object from template class of (template data structure)
    Structure<T> DS{};
public:
    Container();
    ~Container();

    //like interface for any data structure members
    bool isEmpty();
    bool isFull();
    size_t getSize() const;

    void insertFront(const T& D);
    void insertEnd(const T& D);
    void insertAt(const T& D, size_t index);

    void deleteFront();
    void deleteAt(size_t index);
    void deleteEnd();

    int Find(const T& D);
    void Sort();
    void Reverse();
    void Display();

    T* Retrieve(T key);
    void Traverse(void (*operation)(T&));
};



template<typename T, template<typename> class Structure>
Container<T, Structure>::Container() {
}

template<typename T, template<typename> class Structure>
Container<T, Structure>::~Container() {
    DS.destroyList();
}

template<typename T, template<typename> class Structure>
bool Container<T, Structure>::isEmpty() {
    return DS.isEmpty();
}

template<typename T, template<typename> class Structure>
bool Container<T, Structure>::isFull() {
    return DS.isFull();
}

template<typename T, template<typename> class Structure>
size_t Container<T, Structure>::getSize()const {
    return DS.getSize();
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::insertFront(const T& D) {
    DS.insertFront(D);
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::insertAt(const T& D, size_t pos) {
    assert(pos >= 1 && pos <= DS.getSize());
    DS.insertAt(D, pos);
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::insertEnd(const T& D) {
    DS.insertEnd(D);
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::deleteFront() {
    assert(!(DS.isEmpty()));
    DS.deleteFront();
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::deleteAt(size_t pos) {
    assert(pos >= 1 && pos <= DS.getSize());
    DS.deleteAt(pos);
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::deleteEnd() {
    assert(!(DS.isEmpty()));
    DS.deleteEnd();
}

template<typename T, template<typename> class Structure>
int Container<T, Structure>::Find(const T& D) {
    assert(!(DS.isEmpty()));
    return DS.Find(D);
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::Sort() {
    assert(!(DS.isEmpty()));
    DS.Sort();
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::Reverse() {
    assert(!(DS.isEmpty()));
    DS.Reverse();
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::Display() {
    assert(!(DS.isEmpty()));
    DS.Display();
}

template<typename T, template<typename> class Structure>
T* Container<T, Structure>::Retrieve(T key) {
    assert(!(DS.isEmpty()));
    return DS.Retrieve(key);
}

template<typename T, template<typename> class Structure>
void Container<T, Structure>::Traverse(void (*operation)(T&)) {
    assert(!(DS.isEmpty()));
    DS.Traverse(operation);
}
#endif // CONTAINER_H

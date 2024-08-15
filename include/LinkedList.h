#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>

using namespace std;

// NODE
template<typename T>
struct listNode {
	T data{};
	listNode<T>* next{};
	listNode<T>* previous{};
};

// LINKED LIST
template<typename T>
class LinkedList
{
private:
	listNode<T>* front, * end;
	size_t size;
public:

	listNode<T>* aPtrFromRight(size_t p);
	listNode<T>* aPtrFromLeft(size_t p);

	bool isEmpty();
	bool isFull();
	size_t getSize()const;

	void deleteTheOnlyNode();
	void destroyList();
	void deleteFront();
	void deleteEnd();
	void deleteAt(size_t position);

	void putFirstNode(const T& Data);
	void insertFront(const T& Data);
	void insertEnd(const T& Data);
	void insertAt(const T& Data, size_t position);

	int  Find(const T& key);
	void Reverse();
	void Display();
	void Sort();

	T* Retrieve(T key);
	void Traverse(void (*operation)(T&));

};


template<typename T>
listNode<T>* LinkedList<T>::aPtrFromLeft(size_t p){
	size_t i = 1;
	listNode<T>* ptr = front;
	while (i < p - 1) {
		i++;
		ptr = ptr->next;
	}
	return ptr;
}

template<typename T>
listNode<T>* LinkedList<T>::aPtrFromRight(size_t p){
	size_t i = size;
	listNode<T>* ptr = end;
	while (i > p - 1) {
		i--;
		ptr = ptr->previous;
	}
	return ptr;
}

template<typename T>
bool LinkedList<T>::isEmpty() {
	return !front;
}

template<typename T>
bool LinkedList<T>::isFull() {
	return false;
}

template<typename T>
size_t LinkedList<T>::getSize()const {
	return size;
}

template<typename T>
void LinkedList<T>::destroyList(){
	listNode<T>* temp;
	while (front) {
		temp = front;
		front = front->next;
		delete(temp);
	}
	end = NULL;
	size = 0;
}

template<typename T>
void LinkedList<T>::deleteTheOnlyNode() {
	delete(front);
	front = NULL;
	end = NULL;
	size = 0;
}


template<typename T>
void LinkedList<T>::deleteFront(){
	if (!front->next) {
		deleteTheOnlyNode();
		return;
	}

	listNode<T>* temp = front;
	front = front->next;
	front->previous = NULL;
	delete(temp);
	size--;
}


template<typename T>
void LinkedList<T>::deleteEnd(){
	if (!front->next) {
		deleteTheOnlyNode();
		return;
	}

	listNode<T>* temp = end;
	end = end->previous;
	end->next = NULL;
	delete(temp);
	size--;
}

template<typename T>
void LinkedList<T>::deleteAt(size_t position){
	if (position == 1)
		deleteFront();
	else if (position == size + 1)
		deleteEnd();
	else {
		listNode<T>* ptr;
		if (position <= (size / 2))
			ptr = aPtrFromLeft(position);
		else
			ptr = aPtrFromRight(position);

		listNode<T>* temp = ptr->next;
		ptr->next = temp->next;
		temp->next->previous = ptr;
		delete(temp);
		size--;
	}
}

template<typename T>
void LinkedList<T>::putFirstNode(const T& Data){
	listNode<T>* newNode = new listNode<T>;
	newNode->data = Data;
	front = newNode;
	end = newNode;
	newNode->previous = NULL;
	newNode->next = NULL;
	size = 1;
}

template<typename T>
void LinkedList<T>::insertFront(const T& Data){
	if (!front) {
		putFirstNode(Data);
		return;
	}

	listNode<T>* newNode = new listNode<T>;
	newNode->data = Data;
	newNode->next = front;
	newNode->previous = NULL;
	front->previous = newNode;
	front = newNode;
	size++;

}

template<typename T>
void LinkedList<T>::insertEnd(const T& Data){
	if (!front) {
		putFirstNode(Data);
		return;
	}

	listNode<T>* newNode = new listNode<T>;
	newNode->data = Data;
	newNode->next = NULL;
	newNode->previous = end;
	end->next = newNode;
	end = newNode;
	size++;
}

template<typename T>
void LinkedList<T>::insertAt(const T& Data, size_t position){
	if (position == 1)
		insertFront(Data);
	else if (position == size + 1)
		insertEnd(Data);
	else {
		listNode<T>* ptr;
		if (position < (size / 2))
			ptr = aPtrFromLeft(position);
		else
			ptr = aPtrFromRight(position);
		listNode<T>* newNode = new listNode<T>;
		newNode->data = Data;
		newNode->previous = ptr;
		newNode->next = ptr->next;
		ptr->next->previous = newNode;
		ptr->next = newNode;
		size++;
	}
}

template<typename T>
int LinkedList<T>::Find(const T& key){
	int counter = 1;
	for (listNode<T>* ptr = front; ptr; counter++, ptr = ptr->next) {
		if (ptr->data == key)
			return counter;
	}

	return 0;
}

template<typename T>
void LinkedList<T>::Sort(){
	listNode<T>* min;
	int j;
	for (int i = size; i >= 1; i--) {
		min = front;
		j = 1;
		for (listNode<T>* counter = front; j <= i; j++, counter = counter->next) {
			if (counter->data < min->data)
				min = counter;
		}
		insertEnd(min->data);
		if (min == front) {
			deleteFront();
		}
		else {
			listNode<T>* pre = min->previous;
			pre->next = min->next;
			min->next->previous = pre;
			delete(min);
			size--;
		}
	}
}

template<typename T>
void LinkedList<T>::Reverse() {
	listNode<T>* j = front;
	for (; j != NULL; j = j->previous)
	{
		swap(j->next, j->previous);
	}
	swap(front, end);
}

template<typename T>
void LinkedList<T>::Display(){
	for (listNode<T>* ptr = front; ptr; ptr = ptr->next)
		cout << ptr->data << "\t";
	cout << endl;
}

template<typename T>
T* LinkedList<T>::Retrieve(T key) {
	for (listNode<T>* current = front; current; current = current->next) {
		if (key == (current->data))
			return &(current->data);
	}
	return nullptr;
}

template<typename T>
void LinkedList<T>::Traverse(void (*operation)(T&)) {
	for (listNode<T>* ptr = front; ptr; ptr = ptr->next)
		operation(ptr->data);
}
#endif // LINKEDLIST_H

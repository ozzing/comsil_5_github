#include "LinkedList.h"

template <class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete(T & element);
};

template<class T>
bool Stack<T>::Delete(T& element) {
	if (this->first == 0)
		return false;
	else {
		Node<T>* temp = this->first;
		this->first = this->first->link;
		element = temp->data;
		delete temp;
		this->current_size--;
		return true;
	}
}
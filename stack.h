#include "linkedlist.h"

template <class T>
class Stack:public LinkedList<T>{
	public:
		virtual bool Delete(T& element) {
			if(this->first == 0)
				return false;
		
			Node<T> *check= this->first;

			this->first = check->link;
	
			element = check->data;
			this->current_size--;
			return true;
		}
};

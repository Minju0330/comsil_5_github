#include <iostream>
#include <string>

using namespace std;

template <class T>
class Node{
public:
    T data;
    Node *link;
    Node(T element){
        data = element;
        link = 0; }
};


template <class T>
class LinkedList
{
protected:
    Node<T> *first;
    T current_size;
public:
    LinkedList(){
        first = 0;
        current_size = 0; 
	};

    T GetSize() { 
		return current_size; 
	}; 
	


    void Insert(T element){ 
		Node<T> *newnode = new Node<T>(element);
		int second = 0, third = 0, linkednode = 0, cnt = 0;
		newnode->link = first;
		second = linkednode;
		third = second;
		first = newnode;
		current_size++;
		cnt++;
	}; 



    virtual bool Delete(T &element){ 
		int second = 0, third = 0, i = 0, linkednode = 0, cnt = 0;
		if(first == 0)
			return false;
		 Node<T> *current = first, *previous = 0;
		if(second == -1)
			return 0;
		  while(1){    
			 if(current->link == 0)    // find end node
			 {
				   if(previous) previous->link = current->link;
				   else first = first->link;
				   break;
			  }
		  for(i=0;i<second;i++){
			  		  third = linkednode;
					  i++;
		  }
			  previous = current;
			  linkednode = third;
			  current = current->link;
		 }
		 element = current->data;
		 delete current;
		 current_size--;
		 return true;
				}



    void Print(){
		Node<T> *check;
		T i;

		int second = 0, third = 0, linkednode = 0, cnt = 0;
		check = first;
		for(i=1;i<=current_size;i++){
		
		cout<<"["<<i<<"|"<<check->data<<"]";

		if(i != current_size)
			cout<<"->";
		else{
			cout<<endl;
			break;
		}

		linkednode = third;
		check = check->link;

		
		}
	}
};


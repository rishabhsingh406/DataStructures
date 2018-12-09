#include "pch.h"
template <class T>
class LinkedList
{

public:
	T data;
	LinkedList * node;
	int size = 1;
	LinkedList();
	~LinkedList();
	void getNode(T val);
	void removeNode(int index);
	LinkedList<T>* reverse();
};
template<class T>
void LinkedList<T>::getNode(T val)
{
	LinkedList * node = new LinkedList();
	LinkedList * node1 = this;
	while (node1->node != nullptr)
	{
		/*node1 = node2;
		node2 = node2->node;*/
		node1 = node1->node;
	}
	node1->node = node;
	node->data = val;
	this->size++;
}
template<class T>
void LinkedList<T>::removeNode(int idx)
{
	LinkedList * node1 = this;
	int i = 0;
	while (node1 != nullptr)
	{
		/*node1 = node2;
		node2 = node2->node;*/
		i++;
		if (i == idx) {
			node1->node = node1->node->node;
			//delete node1->node;
			return;
		}
		node1 = node1->node;

	}
}
template<class T>
LinkedList<T>* LinkedList<T>::reverse()
{
	LinkedList<T>  *next = new LinkedList<T>();

	LinkedList<T>  *prev = new LinkedList<T>();

	LinkedList<T>  *curr = new LinkedList<T>();
	curr = this;
	prev = nullptr;
	while (curr != nullptr) {
		//curr=curr->next;
		next = curr->node;
		curr->node = prev;
		prev = curr;
		curr = next;
	}
	return  prev;
}
//template<class T>
//LinkedList<T> * reverse(LinkedList<T> head) {
//	
//}

/* Constructors you have to kill only those elements who are been alloted memory. not everything*/
template <class T> LinkedList<T>::LinkedList()
{
	node = nullptr;
}
template <class T> LinkedList<T>::~LinkedList()
{
	delete node;
}

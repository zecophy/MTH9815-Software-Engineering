#pragma once
#include <memory>

template<typename T>
class Node
{
public:
	Node();
	Node(T x);
	~Node();
	
	T val;
	std::shared_ptr<Node<T> > next;

};


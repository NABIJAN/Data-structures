#include "Node.h"

template <typename Node_entry>
Node<Node_entry>::Node(){
	next = NULL;
}

template <typename Node_entry>
Node<Node_entry>::Node(Node_entry item, Node* add_next){
	entry = item;
	next = add_next;
}

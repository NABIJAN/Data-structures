#include "L_stack.h"

template <typename Stack_entry>
Stack<Stack_entry>::Stack(){
	top_node = NULL;
}

template <typename Stack_entry>
Stack<Stack_entry>::~Stack(){
	while(!empty()) pop();
}

template <typename Stack_entry>
bool Stack<Stack_entry>::empty() const{
	if(top_node == NULL) return false;
	else return true;
}

template <typename Stack_entry>
Error_code Stack<Stack_entry>::push(const Stack_entry &item){
	Node<Stack_entry>* new_top = new Node<Stack_entry>(item,top_node);
	if(new_top == NULL) return overflow;
	top_node = new_top;
	return success;
}

template <typename Stack_entry>
Error_code Stack<Stack_entry>::pop(){
	Node<Stack_entry>* old_node = top_node;
	if(top_node == NULL) return underflow;
	top_node = top_node->next;
	delete old_node;
}

template <typename Stack_entry>
Error_code Stack<Stack_entry>::top(Stack_entry &item) const{
	if(top_node == NULL) return underflow;\
	item = top_node->netry;
	return success;
}

template <typename Stack_entry>
void Stack<Stack_entry>::operator = (const Stack &original){
	Node<Stack_entry> *new_copy, *new_top, *original_node = original.top_node;
	if(original.top_node == NULL) new_copy = NULL;
	new_copy = new_top = new Node<Stack_entry>(original_node->entry); 
	//
	while(original_node->next != NULL) {
		original_node = original_node->next;
		new_copy->next = new Node<Stack_entry>(original_node->entry);
		new_copy = new_copy->next;
	}
	while(!empty()) pop();
	top_node = new_top;
}



#include "Node.h"

template <typename Stack_entry>
class Stack{
	public:
		Stack();
		~Stack();
		bool empty()const;
		Error_code push(const Stack_entry &item);
		Error_code pop();
		Error_code top(Stack_entry &item) const;
		void operator = (const Stack &original);
	protected:
		Node<Stack_entry> *top_node;
};

#include <cstdlib>
enum Error_code{
	success, overflow, underflow
};
template <typename Node_entry>
struct Node{
		Node();
		Node(Node_entry item, Node* add_next = NULL);
		Node_entry entry;
		Node *next;
};

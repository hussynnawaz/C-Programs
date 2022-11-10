Priority Queue in C++
The priority queue in C++ is a derived container in STL that considers only the highest priority element. The queue follows the FIFO policy while priority queue pops the elements based on the priority, i.e., the highest priority element is popped first.

It is similar to the ordinary queue in certain aspects but differs in the following ways:

In a priority queue, every element in the queue is associated with some priority, but priority does not exist in a queue data structure.
The element with the highest priority in a priority queue will be removed first while queue follows the FIFO(First-In-First-Out) policy means the element which is inserted first will be deleted first.
If more than one element exists with the same priority, then the order of the element in a queue will be taken into consideration.
Note: The priority queue is the extended version of a normal queue except that the element with the highest priority will be removed first from the priority queue.
Syntax of Priority Queue
priority_queue<int> variable_name;  
Let's understand the priority queue through a simple example.

Priority Queue in C++
In the above illustration, we have inserted the elements by using a push() function, and the insert operation is identical to the normal queue. But when we delete the element from the queue by using a pop() function, then the element with the highest priority will be deleted first.

Member Function of Priority Queue
Function	Description
push()	It inserts a new element in a priority queue.
pop()	It removes the top element from the queue, which has the highest priority.
top()	This function is used to address the topmost element of a priority queue.
size()	It determines the size of a priority queue.
empty()	It verifies whether the queue is empty or not. Based on the verification, it returns the status.
swap()	It swaps the elements of a priority queue with another queue having the same type and size.
emplace()	It inserts a new element at the top of the priority queue.
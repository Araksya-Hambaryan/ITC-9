#include "queue.hpp"

int main() {
	Queue* queue1 = new Queue;
	Queue* queue2 = new Queue(5,0);
	queue1 -> push(9);
	queue1 -> print();
	queue1 -> push(2);
	queue1 -> print();
	queue1 -> push(7);
	queue1 -> print();

	queue2 -> print();
	queue2 -> pop();
	queue2 -> print();
	queue2 -> push(10);
	queue2 -> print();
	queue2 -> getSize();

	return 0;
}

#include<iostream>
using namespace std;
int count_stack = 0;
struct list {
	int data;
	list*next;
};
struct stack {
	list*top;
	stack() {
		top = NULL;
	}
	void push(int value) {
		list*temp;
		temp->data = value;
		temp->next = NULL;
		if (top != NULL) {
			temp->next = top;
		}
		top = temp;
		count_stack++;
	}
	void pop() {
		list*temp;
		if (top == NULL) {
			cout << "Empty stack" << endl;
			return;
		}
		temp = top;
		top = top->next;
		cout << "the value that is poped = " << temp->data << endl;
		delete temp;
		count_stack--;
	}
	void print() {
		list*p = top;
		while (p != NULL) {
			cout << p->data << " ";
			p = p->next;
		}
	}
	int size() {
		return count_stack;
	}
};
#define Max 1000
class Stack {
	int top;
public:
	int a[Max];
	Stack() { top = -1; }
	void push(int x);
	void pop();
	bool isEmpty();
	bool isFull();
	void print();
};
bool Stack::isEmpty() { return (top < 0); }
bool Stack::isFull() { return (top >= Max); }
void Stack::push(int x) {
	if (Stack::isFull()) {
		cout << "Stack Overflow" << endl;
		return;
	}
	else {
		a[++top] = x;
		cout << x << " has been Pushed in stack" << endl;
		return;
	}
}
void Stack::pop() {
	if (Stack::isEmpty()) {
		cout << "Stack Underflow" << endl;
		return;
	}
	else {
		int x = a[top--];
		cout << x << " has been poped out of stack" << endl;
		return;
	}
}
void Stack::print() {
	cout << "Stack Elements: ";
	for (int i = top; i>=0; i--) {
		cout << a[i]<<" ";
	}
	cout << endl;
}
class Queue {
	int front;
	int rear;
	int counter;
	int arr[Max];
	int maxsize;
public:
	Queue(int size) {
		front = 0;
		rear = -1;
		counter = 0;
		maxsize = size;
	}
	~Queue() { delete arr; }
	bool isEmpty();
	bool isFull();
	void enqueue(int x);
	void dequeue();
	void print();
};
bool Queue::isEmpty() {
	return (counter == 0);
}
bool Queue::isFull() { return (counter >= maxsize); }
void Queue::enqueue(int x) {
	if (isFull()) {
		cout << "Queue is Full " << endl;
		return;
	}
	else {
		rear = (rear + 1) % maxsize;
		arr[rear] = x;
		counter++;
	}
}
void Queue::dequeue() {
	if (isEmpty()) {
		cout << "Queue is Empty " << endl;
		return;
	}
	else {
		int x = arr[front];
		front = (front + 1) % maxsize;
		counter--;
		cout << x << " Has been removed from Queue " << endl;
	}
}
void Queue::print() {
	cout << "Queue Elements: ";
	for (int i = 0; i < counter; i++) {
		cout << arr[(front + i) % maxsize]<<" ";
	}
	cout << endl;
}
int main() {
	/*struct Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.print();*/
	Queue queue(10);
	for (int x = 0; x < 5; x++)
		queue.enqueue(x);
	cout << "Now attempting to enqueue again..." << endl;
	queue.enqueue(5);
	queue.dequeue();
	queue.enqueue(8);
	queue.print();
	system("pause");
	return 0;
}
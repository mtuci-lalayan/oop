#include <iostream>

using namespace std;

class Stack {
private:
	struct Node {
		int x;
		Node *next;
	};
	Node *top;
	int size;
public:
	Stack();
	Stack(int size);
	Stack(const Stack &other);
	Stack(Stack &&other);
	~Stack();

	Stack &operator=(const Stack &other);
	Stack &operator=(Stack &&other);
	friend ostream& operator<<(ostream &out, const Stack &rv) {
		Node *cur = rv.top;
		while (cur != NULL) {
			out << cur->x << " ";
			cur = cur->next;
		}
		return out;
	}

	int GetSize(void) const;
	bool Push(const int &element);
	bool Pop(int &element);
	bool Peek(int &element);

	bool EmptyStack(void) { return (top ? false : true); }
	void StackCopy(const Stack &other);
};

Stack::Stack() {
	Stack::size = 0;
	top = nullptr;
}

Stack::Stack(int size) {
	Stack::size = size;
	top = nullptr;
}

Stack::Stack(const Stack &other) {
	StackCopy(other);
}

Stack::Stack(Stack &&other) {
	StackCopy(other);
	other.top = nullptr;
}



Stack::~Stack(void) {
	while (top != NULL) {
		Node *cur = top->next;
		delete top;
		top = cur;
	}
}

Stack &Stack::operator=(const Stack &other) {
	if (this == &other) {
		return *this;
	}
	StackCopy(other);
	return *this;
}

Stack &Stack::operator=(Stack &&other) {
	if (this == &other) {
		return *this;
	}
	StackCopy(other);
	other.top = nullptr;
	return *this;
}

void Stack::StackCopy(const Stack &other) {
	top = NULL;
	size = other.size;
	Node *cur = other.top;
	bool res;
	while (cur != NULL) {
		res = Push(cur->x);
		cur = cur->next;
	}
}

int Stack::GetSize(void) const {
	int count = 0;
	Node *cur = top;
	while (cur != NULL) {
		cur = cur->next;
		count++;
	}
	return count;
}

bool Stack::Push(const int &element) {
	if (GetSize() >= size) return false;
	Node *np = new Node;
	np->x = element;
	np->next = top;
	top = np;
	return true;
}


bool Stack::Pop(int &element) {
	if (EmptyStack()) return false;
	element = top->x;
	Node *cur = top;
	top = top->next;
	delete cur;
	return true;
}

bool Stack::Peek(int &element) {
	if (EmptyStack()) return false;
	element = top->x;
	return true;
}

Stack getStack(const int &size) {
	Stack s(size);
	return s;
}

int main(int argc, char **argv) {
	Stack st(4);
	bool result;

	cout << "Is New stack empty? = " << st.EmptyStack() << endl;
	cout << "Current stack size = " << st.GetSize() << endl;

	result = st.Push(1);
	cout << "\nPush element '1' in stack = " << result << endl;

	result = st.Push(2);
	cout << "Push element '2' in stack = " << result << endl;

	result = st.Push(3);
	cout << "Push element '3' in stack = " << result << endl;

	result = st.Push(4);
	cout << "Push element '4' in stack = " << result << endl;

	result = st.Push(5);
	cout << "Push element '5' in stack = " << result << endl;

	cout << "\nIs new stack empty now? = " << st.EmptyStack() << endl;
	cout << "Current stack size = " << st.GetSize() << endl;
	cout << "Result Stack: " << st << "\n" << endl;

	Stack st2 = getStack(2);
	st2 = st;

	cout << "'Stack2' = 'Stack' : " << st2 << "\n" << endl;
	cout << "Deleting original 'Stack' from memory..." << endl;
	st.~Stack();

	int element;
	result = st2.Pop(element);
	cout << "Pop element from 'Stack2' = " << element << " pop result " << result << endl;
	cout << "Now 'Stack2' is = " << st2 << "\n" << endl;

	result = st2.Peek(element);
	cout << "Peek element from 'Stack2' = " << element << " peek result " << result << endl;
	cout << "Now 'Stack2' is = " << st2 << endl;
	cout << "Current Stack2 size = " << st2.GetSize() << endl;

	st2.~Stack();
	return 0;
}


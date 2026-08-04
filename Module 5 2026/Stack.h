#pragma once
#include <vector>

template <typename T>
class Stack
{
private:
	std::vector<T> contents;
public:
	Stack(T item);
	Stack(std::vector<T> items);

	void push(T item);
	T pop();
	T top();
	bool isEmpty();

};

template <typename T>
Stack<T>::Stack(T item) {
	contents.push_back(item);
}

template <typename T>
Stack<T>::Stack(std::vector<T> items) {
	for (int i = 0; i < items.size(); i++)
		contents.push_back(items[i]);
}

template <typename T>
void Stack<T>::push(T item) {
	contents.push_back(item);
}

template <typename T>
T Stack<T>::pop() {
	T temp = top();
	contents.pop_back();
	return temp;
	
}

template <typename T>
T Stack<T>::top() {
	return contents[contents.size() - 1];
}

template <typename T>
bool Stack<T>::isEmpty() {
	return contents.size() == 0;
}


#pragma once
#include<iostream>
#include <vector>
#include <string>
#include <concepts>

template<typename T>
concept AddableToString = requires(std::string s, T val) {
	{ s + val } -> std::convertible_to<std::string>;
};


template <AddableToString T> class Box
{
private:
	std::vector<T> contents;

public:
	Box();
	Box(T initialContents);
	Box(std::vector<T> initialContents);
	std::string getContents();
	//friend std::ostream& operator<<(std::ostream& strm, Box box);

};

template <AddableToString T>
Box<T>::Box() {
}

template <AddableToString T>
Box<T>::Box(T initialContents) {
	contents.push_back(initialContents);
}

template <AddableToString T>
Box<T>::Box(std::vector<T> initialContents) {
	for (int i = 0; i < initialContents.size(); i++) 
		contents.push_back(initialContents[i]);
}

template <AddableToString T>
std::string Box<T>::getContents() {
	std::string result = "";
	result += "A Box containing: \n";
	for (T item : contents)
		result += "\t" + item + "\n";
	return result;
}

/*
template <typename T>
std::ostream& operator<<(std::ostream& strm, Box<T> box) {
	strm << "A Box containing: " << std::endl;
	for (T item : box.contents)
		strm << "\t" + std::to_string(item) << std::endl;
	return strm;
}
*/


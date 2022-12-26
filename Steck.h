#pragma once
#include<iostream>
using namespace std;

//template<class T>
class Steck {
	// Нижняя и верхняя границы стека
	enum { EMPTY = -1, FULL = 20 };
	// Массив для хранения данных
	char st[FULL + 1] = {"({}[]())"};
	// Указатель на вершину стека
	int top;

public:
	Steck();
	void Push(char c);
	char Pop();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void ChekSteck(string str);

	void Output() {
		for (int i = 0; i < top + 1; i++) {
			cout << st[i] << " ";
		}
		cout << endl;
	}
};


//template<class T>
inline Steck::Steck() {
	// Изначально стек пуст
	top = EMPTY;
}

//template<class T>
void Steck::Clear() {
	// Эффективная "очистка" стека (данные в массиве все еще существуют, 
	// но функции класса, ориентированные на работу с вершиной стека, будут их игнорировать)
	top = EMPTY;
}

//template<class T>
bool Steck::IsEmpty() {
	// Пуст?
	return top == EMPTY;
}

//template<class T>
bool Steck::IsFull() {
	// Полон?
	return top == FULL;
}

//template<class T>
int Steck::GetCount() {
	// Количество присутствующих в стеке элементов
	return top + 1;
}

//template<class T>
void Steck::Push(char c) {
	// Если в стеке есть место, то увеличиваем указатель
	// на вершину стека и вставляем новый элемент
	if (!IsFull())
		st[++top] = c;
}

//template<class T>
char Steck::Pop() {
	// Если в стеке есть элементы, то возвращаем верхний и
	// уменьшаем указатель на вершину стека
	if (!IsEmpty())
		return st[top--];
	else // Если в стеке элементов нет
		return 0;
}

//template<class T>
void Steck::ChekSteck(string str) {
	Steck obj;
	int count = 0;
	for (int i = 0; i < FULL-12; i++) {
		if (str[i] == '(') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[1] == '{') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[1] != '{') {
			count--;
		}
		else if (str[7] == '}') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[9] == '[') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[14] == ']') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[16] == '(') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[21] == ')') {
			count++;
			//cout << "It's correct!" << endl;
		}
		else if (str[22] == ')') {
			count++;
			//cout << "It's correct!" << endl;
		}
	}
	cout << "count = " << count << endl;
	if (count == 8) {
		cout << "It's correct!\n";
	}
	else if (count != 8) {
		cout << "It's something wrong!\n";
	}
}


#pragma once
#include<iostream>
using namespace std;

//template<class T>
class Steck {
	// ������ � ������� ������� �����
	enum { EMPTY = -1, FULL = 20 };
	// ������ ��� �������� ������
	char st[FULL + 1] = {"({}[]())"};
	// ��������� �� ������� �����
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
	// ���������� ���� ����
	top = EMPTY;
}

//template<class T>
void Steck::Clear() {
	// ����������� "�������" ����� (������ � ������� ��� ��� ����������, 
	// �� ������� ������, ��������������� �� ������ � �������� �����, ����� �� ������������)
	top = EMPTY;
}

//template<class T>
bool Steck::IsEmpty() {
	// ����?
	return top == EMPTY;
}

//template<class T>
bool Steck::IsFull() {
	// �����?
	return top == FULL;
}

//template<class T>
int Steck::GetCount() {
	// ���������� �������������� � ����� ���������
	return top + 1;
}

//template<class T>
void Steck::Push(char c) {
	// ���� � ����� ���� �����, �� ����������� ���������
	// �� ������� ����� � ��������� ����� �������
	if (!IsFull())
		st[++top] = c;
}

//template<class T>
char Steck::Pop() {
	// ���� � ����� ���� ��������, �� ���������� ������� �
	// ��������� ��������� �� ������� �����
	if (!IsEmpty())
		return st[top--];
	else // ���� � ����� ��������� ���
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


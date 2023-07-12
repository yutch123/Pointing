// Pointing
// Демонстрирует работу с укзателями

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int* pAPointer; // объявляем указатель
	int* pScore = 0; // объявляем и инициализируем указатель
	int score = 1000;
	pScore = &score; // присваиваем указателю pScore адрес переменной score
	cout << "Assigning &score to pScore\n";
	cout << "&score is: " << &score << "\n"; // адрес перменной score
	cout << "pScore is: " << pScore << "\n"; // адрес, сохраненный в указателе
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n"; // значение, на которое направлен указатель

	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Adding 500 to *pScore\n";
	*pScore += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Assigning &newScore to pScore\n";
	int newScore = 5000;
	pScore = &newScore; // переприсваивание указателей
	cout << "&newScore is: " << &newScore << "\n";
	cout << "pScore is: " << pScore << "\n";
	cout << "newScore is: " << newScore << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Assigning &str to pStr\n";
	string str = "score";
	string* pStr = &str; // указатель на строковый объект
	cout << "str is: " << str << "\n";
	cout << "*pStr is: " << *pStr << "\n";
	cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
	cout << "pStr->size() is: " << pStr->size() << "\n";
	return 0;
}


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);

	char textureOfLine;
	cout << "Введите текстуру фигуры: ";
	cin >> textureOfLine;
	cout << " \n";

	cout << "[1] Линия \n";
	cout << "[2] Квадрат \n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Решетка\n";
	cout << "[6] Крестик\n";
	cout << "[7] Плюс\n";
	cout << "[8] Ромб\n";
	cout << "Введите тип фигуры: ";

	int typeFigure;
	cin >> typeFigure;
	cout << " \n";

	int longOfLine;

	int fullness;


	if (typeFigure == 1) {

		/*
			отрисовка горизонтальной и вертикальной линии
		*/

	}
	else if (typeFigure == 2) {

		/*
			отрисовка пустого и заполненного квадрата
		*/

	}
	else if (typeFigure == 3) {

		/*
			отрисовка пустого и заполненного прямоугольника
		*/

	}
	else if (typeFigure == 4) {

		/*
			отрисовка пустого и заполненного треугольника
		*/

	}
	else if (typeFigure == 5) {

		/*
			отрисовка решетки
		*/

	}
	else if (typeFigure == 6) {

		/*
			отрисовка крестика
		*/

	}
	else if (typeFigure == 7) {

		/*
			отрисовка плюса
		*/

	}
	else if (typeFigure == 8) {
		
		/*
			отрисовка ромба
		*/

	}
	else {
		cout << "Такой фигуры нет...";
	}

	int _; cin >> _;
}

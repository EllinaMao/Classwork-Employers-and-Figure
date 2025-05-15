/*

Абстрактный класс и виртуальный деструктор


Задание 1
Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print(). Создайте три производных класса: President, Manager, Worker. Переопределите функцию Print() для вывода информации, соответствующей каждому типу служащего.

Задание 2
Создать абстрактный базовый класс с виртуальной функцией - площадь. Создать производные классы: прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади. Для проверки определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов.

*/

#include <iostream>
#include "Employer.h"
#include "Manager.h"
#include "President.h"
#include "Worker.h"
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "rightTriangle.h"
#include "Trapezoid.h"
using namespace std;


int main()
{
    size_t sizet1 = 4;
    Employer** staff = new Employer * [sizet1];
    staff[0] = new President("Anna", "Dotova", "CEO", "Step president");
    staff[1] = new Manager("Sasa", "Dotova", "Manager", "Manage team");
    staff[2] = new Worker("Ivan", "Ivanov", "Worker", "Perform tasks");

    for (int i = 0; i < 3; ++i) {
        staff[i]->Print();
    }

    for (int i = 0; i < 3; ++i) {
        delete staff[i];
    }
    delete staff;
    // task2
    size_t size = 4;
    Figure** figures = new Figure * [size];
    figures[0] = new Rectangle(5, 10);
    figures[1] = new Circle(7);
    figures[2] = new rightTriangle(3, 4);
    figures[3] = new Trapezoid(3, 3, 5);

    for (size_t i = 0; i < size; ++i) {
        figures[i]->ShowName();
        figures[i]->ShowArea();
        cout << "------------" << endl;
    }
    for (size_t i = 0; i < size; ++i) {
        delete figures[i];
    }
    delete[] figures;


}



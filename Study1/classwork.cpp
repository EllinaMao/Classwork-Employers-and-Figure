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
using namespace std;


int main()
{
    Employer* staff[3];
    staff[0] = new President("Anna", "Dotova", "CEO", "Step president");
    staff[1] = new Manager("Sasa", "Dotova", "Manager", "Manage team");
    staff[2] = new Worker("Ivan", "Ivanov", "Worker", "Perform tasks");

    for (int i = 0; i < 3; ++i) {
        staff[i]->Print();
    }

    for (int i = 0; i < 3; ++i) {
        delete staff[i];
    }
    //task2

}



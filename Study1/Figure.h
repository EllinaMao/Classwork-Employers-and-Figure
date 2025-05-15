#pragma once
#include <iostream>
using namespace std;

/*
Создать абстрактный базовый класс с виртуальной функцией - площадь. Создать производные классы: прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади. Для проверки определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов.
*/
class Figure
{
protected:
    char* name;
    char* copyString(const char* src);

public:
    Figure();
    void ShowName() const;
    virtual void ShowArea() const = 0;

    void SetName(const char* n);
	char* GetName() const{return name;}
    virtual ~Figure();

};
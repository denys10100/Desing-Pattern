#include <iostream>
#include <string>
#include <unordered_map>

//#include "Component.h"
//#include "Engine.h"
//#include "Wheel.h"
//#include "Transmission.h"
#include "Car.h"

int main()
{
    // ��������� ����������� ��'���� Car
    Car* originalCar = new Car("Sedan");

    // ��������� �� ��������� ���������� �� ���������
    Component* engine = new Engine("V6", 300, 3.5, "Petrol");
    Component* wheel = new Wheel("Alloy", 18);
    Component* transmission = new Transmission("Automatic", 8);

    originalCar->addComponent("Engine", engine);
    originalCar->addComponent("Wheel", wheel);
    originalCar->addComponent("Transmission", transmission);

    // ���������� ��'���� Car
    Car* clonedCar = new Car(*originalCar);

    // ��������� ����� ���������� �� ����������� ���������
    Component* newWheel = new Wheel("Steel", 16);
    clonedCar->addComponent("Wheel", newWheel);

    // ���� ������������ �� ����������� ���������
    originalCar->print();
    std::cout << std::endl;
    clonedCar->print();

    // ��������� ���'��
    delete originalCar;
    delete clonedCar;

    return 0;
}

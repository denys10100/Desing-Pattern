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
    // Створення початкового об'єкту Car
    Car* originalCar = new Car("Sedan");

    // Створення та додавання компонентів до автомобіля
    Component* engine = new Engine("V6", 300, 3.5, "Petrol");
    Component* wheel = new Wheel("Alloy", 18);
    Component* transmission = new Transmission("Automatic", 8);

    originalCar->addComponent("Engine", engine);
    originalCar->addComponent("Wheel", wheel);
    originalCar->addComponent("Transmission", transmission);

    // Клонування об'єкту Car
    Car* clonedCar = new Car(*originalCar);

    // Додавання нових компонентів до клонованого автомобіля
    Component* newWheel = new Wheel("Steel", 16);
    clonedCar->addComponent("Wheel", newWheel);

    // Друк оригінального та клонованого автомобіля
    originalCar->print();
    std::cout << std::endl;
    clonedCar->print();

    // Звільнення пам'яті
    delete originalCar;
    delete clonedCar;

    return 0;
}

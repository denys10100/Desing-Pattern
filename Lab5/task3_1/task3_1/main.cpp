#include <iostream>
#include <string>

// Базовий клас "Equation" (Рівняння)
class Equation
{
public:
    virtual Equation* clone() const = 0;
    virtual void print() const = 0;
    virtual ~Equation() {}
};

// Конкретний нащадок "LinearEquation" (Лінійне рівняння)
class LinearEquation : public Equation
{
private:
    double a, b;

public:
    LinearEquation(double a, double b) : a(a), b(b) {}

    Equation* clone() const override
    {
        return new LinearEquation(*this);
    }

    void print() const override
    {
        std::cout << "Linear Equation: " << a << "x + " << b << " = 0" << std::endl;
    }
};

// Конкретний нащадок "QuadraticEquation" (Квадратне рівняння)
class QuadraticEquation : public Equation
{
private:
    double a, b, c;

public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    Equation* clone() const override
    {
        return new QuadraticEquation(*this);
    }

    void print() const override
    {
        std::cout << "Quadratic Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    }
};

int main()
{
    // Створення початкових об'єктів
    Equation* originalEquation = new LinearEquation(2.5, 3.0);

    // Клонування об'єкту
    Equation* clonedEquation = originalEquation->clone();

    // Друк оригінального та клонованого рівняння
    originalEquation->print();
    clonedEquation->print();

    // Звільнення пам'яті
    delete originalEquation;
    delete clonedEquation;

    return 0;
}

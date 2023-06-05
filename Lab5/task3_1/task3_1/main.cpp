#include <iostream>
#include <string>

// ������� ���� "Equation" (г������)
class Equation
{
public:
    virtual Equation* clone() const = 0;
    virtual void print() const = 0;
    virtual ~Equation() {}
};

// ���������� ������� "LinearEquation" (˳���� �������)
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

// ���������� ������� "QuadraticEquation" (��������� �������)
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
    // ��������� ���������� ��'����
    Equation* originalEquation = new LinearEquation(2.5, 3.0);

    // ���������� ��'����
    Equation* clonedEquation = originalEquation->clone();

    // ���� ������������ �� ����������� �������
    originalEquation->print();
    clonedEquation->print();

    // ��������� ���'��
    delete originalEquation;
    delete clonedEquation;

    return 0;
}

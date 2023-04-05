#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>

#include "Equation.h"
#include "EquationFactory.h"
#include "QuadraticEquation.h"
#include "BiQuadraticEquation.h"

using namespace std;

// Factory Method that creates an Equation object based on its degree
unique_ptr<Equation> create_equation(const vector<double>& coefficients)
{
    if (coefficients.size() == 2)
    {
        return make_unique<Equation>(coefficients[0], coefficients[1]);
    }
    else if (coefficients.size() == 3)
    {
        return make_unique<QuadraticEquation>(coefficients[0], coefficients[1], coefficients[2]);
    }
    else if (coefficients.size() == 4)
    {
        return make_unique<BiQuadraticEquation>(coefficients[0], coefficients[1], coefficients[2], coefficients[3]);
    }
    else
    {
        return nullptr;
    }
}

int main()
{
    ifstream input_file("input01.txt");
    if (!input_file)
    {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    // Read equations from file and create Equation objects
    vector<unique_ptr<Equation>> equations;
    string line;
    while (getline(input_file, line))
    {
        vector<double> coefficients;
        double coeff;
        istringstream iss(line);
        while (iss >> coeff)
        {
            coefficients.push_back(coeff);
        }
        equations.push_back(create_equation(coefficients));
    }
    input_file.close();

    // Solve equations and store the results
    vector<vector<double>> solutions;
    for (auto& eq : equations)
    {
        solutions.push_back(eq->solve());
    }

    // Analyze the solutions
    int no_sol = 0, one_sol = 0, two_sol = 0, three_sol = 0, four_sol = 0, inf_sol = 0;
    double smallest_sol = numeric_limits<double>::max(), biggest_sol = -numeric_limits<double>::max();
    for (const auto& sol : solutions)
    {
        if (sol.empty())
        {
            no_sol++;
        }
        else if (sol.size() == 1)
        {
            one_sol++;
            smallest_sol = min(smallest_sol, sol[0]);
            biggest_sol = max(biggest_sol, sol[0]);
        }
        else if (sol.size() == 2)
        {
            two_sol++;
        }
        else if (sol.size() == 3)
        {
            three_sol++;
        }
        else if (sol.size() == 4)
        {
            four_sol++;
        }
        else
        {
            inf_sol++;
        }
    }

    // Print the results
    cout << "Equations with no solutions: " << no_sol << endl;
    cout << "Equations with one solution: " << one_sol << endl;
    cout << "Equations with two solutions: " << two_sol << endl;
    cout << "Equations with three solutions: " << three_sol << endl;
    cout << "Equations with four solutions: " << four_sol << endl;
    cout << "Equations with infinite solutions: " << inf_sol << endl;
    if (one_sol > 0)
    {
        cout << "Smallest solution: " << smallest_sol << endl;
        cout << "Biggest solution: " << biggest_sol << endl;
    }

    return 0;
}


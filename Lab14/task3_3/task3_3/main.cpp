#include <iostream>


#include "AdditionHandler.h"
#include "SubtractionHandler.h"
#include "MultiplicationHandler.h"
#include "DivisionHandler.h"


int main()
{
 
    RequestHandler* additionHandler = new AdditionHandler();
    RequestHandler* subtractionHandler = new SubtractionHandler();
    RequestHandler* multiplicationHandler = new MultiplicationHandler();
    RequestHandler* divisionHandler = new DivisionHandler();

    additionHandler->setSuccessor(subtractionHandler);
    subtractionHandler->setSuccessor(multiplicationHandler);
    multiplicationHandler->setSuccessor(divisionHandler);

    additionHandler->handleRequest(5, 3, "+");  
    additionHandler->handleRequest(10, 7, "-"); 

    additionHandler->handleRequest(4, 6, "*");  
    additionHandler->handleRequest(8, 0, "/");  // Error
    additionHandler->handleRequest(2, 3, "^");  // Error

    // Звільнення пам'яті
    delete additionHandler;
    delete subtractionHandler;
    delete multiplicationHandler;
    delete divisionHandler;

    return 0;
}

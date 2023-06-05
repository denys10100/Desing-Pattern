#pragma once


class RequestHandler
{
protected:
    RequestHandler* successor;

public:
    void setSuccessor(RequestHandler* successor)
    {
        this->successor = successor;
    }

    virtual void handleRequest(int a, int b, const std::string& operation) = 0;
};

#pragma once

#include <string>

class Tires
{
public:
    Tires(std::string brand, int size) : brand_(brand), size_(size) {}

    void showDetails() const
    {
        std::cout << "Brand: " << brand_ << ", Size: " << size_ << std::endl;
    }

private:
    std::string brand_;
    int size_;
};








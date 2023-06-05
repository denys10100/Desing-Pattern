#pragma once
#include <string>
#include "Tires.h"
class TiresBuilder
{
public:
    TiresBuilder() : m_size(0), m_type("") {}
    TiresBuilder& setSize(int size)
    {
        m_size = size;
        return *this;
    }
    TiresBuilder& setType(const std::string& type)
    {
        m_type = type;
        return *this;
    }
    Tires build() const
    {
        return Tires(m_size, m_type);
    }
private:
    int m_size;
    std::string m_type;
};
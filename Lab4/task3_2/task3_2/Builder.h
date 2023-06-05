#pragma once

#include <string>

template <typename T>
class Builder
{
private:
    std::basic_string<T> str;
public:
    Builder() {}
    Builder(const std::basic_string<T>& s) : str(s) {}

    // Додає символи у кінець рядка
    Builder& append(const std::basic_string<T>& s)
    {
        str.append(s);
        return *this;
    }

    // Вставляє символи у вказану позицію рядка
    Builder& insert(size_t pos, const std::basic_string<T>& s)
    {
        str.insert(pos, s);
        return *this;
    }

    // Повертає сформований рядок
    std::basic_string<T> to_string() const
    {
        return str;
    }
};

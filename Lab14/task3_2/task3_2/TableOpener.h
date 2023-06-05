#pragma once
#include "FileOpener.h"

class TableOpener : public FileOpener
{
public:
    bool canOpen(const std::string& fileName) const override
    {
        return endsWith(fileName, ".xls") || endsWith(fileName, ".xlsx");
    }

    void openFile(const std::string& fileName) override
    {
        std::cout << "Opening Table file: " << fileName << std::endl;
        // Логіка відкриття таблиці
    }

private:
    bool endsWith(const std::string& str, const std::string& suffix) const
    {
        return str.size() >= suffix.size() &&
            str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
    }
};
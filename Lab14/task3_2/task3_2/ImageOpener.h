#pragma once
#include "FileOpener.h"

class ImageOpener : public FileOpener
{
public:
    bool canOpen(const std::string& fileName) const override
    {
        return endsWith(fileName, ".jpg") || endsWith(fileName, ".png");
    }

    void openFile(const std::string& fileName) override
    {
        std::cout << "Opening image file: " << fileName << std::endl;
        // Логіка відкриття зображення
    }

private:
    bool endsWith(const std::string& str, const std::string& suffix) const
    {
        return str.size() >= suffix.size() &&
            str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
    }
};
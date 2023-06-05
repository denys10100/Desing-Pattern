#pragma once

#include "FileOpener.h"

class PresentationOpener : public FileOpener
{
public:
    bool canOpen(const std::string& fileName) const override
    {
        return endsWith(fileName, ".pptx");
    }

    void openFile(const std::string& fileName) override
    {
        std::cout << "Opening presentation file: " << fileName << std::endl;
        // Логіка відкриття презентації
    }

private:
    bool endsWith(const std::string& str, const std::string& suffix) const
    {
        return str.size() >= suffix.size() &&
            str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
    }
};
#pragma once
#include "FileOpener.h"

class DocumentOpener : public FileOpener
{
public:
    bool canOpen(const std::string& fileName) const override
    {
        return endsWith(fileName, ".docx") || endsWith(fileName, ".doc") || endsWith(fileName, ".pdf");
    }

    void openFile(const std::string& fileName) override
    {
        std::cout << "Opening document file: " << fileName << std::endl;
        // ����� �������� ���������
    }

private:
    bool endsWith(const std::string& str, const std::string& suffix) const
    {
        return str.size() >= suffix.size() &&
            str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
    }
};
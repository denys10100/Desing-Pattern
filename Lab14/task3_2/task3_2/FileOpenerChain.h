#pragma once

#include "ImageOpener.h"
#include "DocumentOpener.h"
#include "TableOpener.h"
#include "PresentationOpener.h"

class FileOpenerChain
{
public:
    FileOpenerChain()
    {
        // Створення ланцюжка обробників
        fileOpeners.push_back(new ImageOpener());
        fileOpeners.push_back(new DocumentOpener());
        fileOpeners.push_back(new TableOpener());
        fileOpeners.push_back(new PresentationOpener());
    }

    ~FileOpenerChain()
    {
        // Видалення обробників
        for (FileOpener* opener : fileOpeners)
        {
            delete opener;
        }
    }

    void openFile(const std::string& fileName)
    {
        for (FileOpener* opener : fileOpeners)
        {
            if (opener->canOpen(fileName))
            {
                opener->openFile(fileName);
                return;
            }
        }

        std::cout << "Unable to open file: " << fileName << std::endl;
    }

private:
    std::vector<FileOpener*> fileOpeners;
};
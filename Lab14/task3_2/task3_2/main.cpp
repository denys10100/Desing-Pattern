#include <iostream>
#include <string>
#include <vector>

#include "FileOpenerChain.h"

int main()
{
    FileOpenerChain fileOpenerChain;

    std::string files[] = {
        "image.jpg",
        "image.png",
        "document.docx",
        "document.doc",
        "table.xls",
        "table.xlsx",
        "presentation.pptx",
        "document.pdf"
    };

    for (const std::string& file : files)
    {
        fileOpenerChain.openFile(file);
    }

    return 0;
}

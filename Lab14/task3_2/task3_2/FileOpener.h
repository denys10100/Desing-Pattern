#pragma once

class FileOpener
{
public:
    virtual bool canOpen(const std::string& fileName) const = 0;
    virtual void openFile(const std::string& fileName) = 0;
    virtual ~FileOpener() {}
};

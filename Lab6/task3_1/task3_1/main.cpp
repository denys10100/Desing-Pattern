#include <iostream>
#include <fstream>
#include <string>

class TextFileProcessor
{
private:
    std::string filename;

    TextFileProcessor(const std::string& filename) : filename(filename)
    {
        // Приватний конструктор
    }

public:
    static TextFileProcessor& getInstance(const std::string& filename)
    {
        static TextFileProcessor instance(filename);
        return instance;
    }

    void processFile()
    {
        std::ifstream file(filename);
        if (file.is_open())
        {
            std::string line;
            while (std::getline(file, line))
            {
                // Обробка рядка тексту
                std::cout << "Processing line: " << line << std::endl;
            }
            file.close();
        }
        else
        {
            std::cout << "Failed to open file: " << filename << std::endl;
        }
    }
};

int main()
{
    TextFileProcessor& processor = TextFileProcessor::getInstance("data.txt");
    processor.processFile();

    return 0;
}

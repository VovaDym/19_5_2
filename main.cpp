//Что нужно сделать
//Разработайте простейший просмотрщик текстовых файлов. В начале программы пользователь вводит путь к текстовому файлу,
// который требуется открыть и просмотреть. Внутренности файла необходимо вывести в стандартный вывод. Программа должна
// работать для любых текстовых файлов в формате TXT, но вы можете создать и свой отдельный файл для теста. Главное,
// чтобы файл был англоязычным, дабы избежать проблем с кодировками.
#include <iostream>
#include <fstream>
#include <string>

int main() {
    char buffer[16];
    std::ifstream file;
    std::string path;
    std::cout << "Enter the path to the file: " << std::endl;
    std::cin >> path;

    file.open(path);
    if (!file.is_open())
    {
        std::cout << "Error!";
    }
    else
    {
        while (!file.eof())
        {
            memset(buffer, 0, sizeof(buffer) / sizeof(buffer[0]));
            file.read(buffer, sizeof(buffer) - 1);
            std::cout << buffer ;
            buffer[file.gcount()] = 0;
        }
    }
    file.close();
}

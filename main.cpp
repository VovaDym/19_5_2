//Что нужно сделать
//Разработайте простейший просмотрщик текстовых файлов. В начале программы пользователь вводит путь к текстовому файлу,
// который требуется открыть и просмотреть. Внутренности файла необходимо вывести в стандартный вывод. Программа должна
// работать для любых текстовых файлов в формате TXT, но вы можете создать и свой отдельный файл для теста. Главное,
// чтобы файл был англоязычным, дабы избежать проблем с кодировками.
#include <iostream>
#include <fstream>
#include <string>

const int length = 100;
char buffer[length];

int main() {

    std::ifstream file;
    std::string path;
    std::cout << "Enter the path to the file: " << std::endl;
    std::cin >> path;

    file.open(path);
    if(!file.is_open())
    {
        std::cout << "Error!";
    }
    else
    {
        std::cout << "File is open: " << std::endl;

        file.read(buffer, length);

        while (file.gcount() > 0)
        {
            std::cout << buffer ;
            memset(buffer, 0, sizeof(buffer) / sizeof(buffer[0]));
            file.read(buffer, file.gcount());
        }
    }
    file.close();
}

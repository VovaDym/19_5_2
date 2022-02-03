//Что нужно сделать
//Разработайте простейший просмотрщик текстовых файлов. В начале программы пользователь вводит путь к текстовому файлу,
// который требуется открыть и просмотреть. Внутренности файла необходимо вывести в стандартный вывод. Программа должна
// работать для любых текстовых файлов в формате TXT, но вы можете создать и свой отдельный файл для теста. Главное,
// чтобы файл был англоязычным, дабы избежать проблем с кодировками.
#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::string str;

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

        int i = 0;
        while (!file.eof())
        {
            file >> str;
            std::cout << " " << str ;
        }
    }
    file.close();
}

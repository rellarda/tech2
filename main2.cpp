#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Unable to open the input file." << std::endl;
        return 1;
    }

    // Строка для считывания каждой строки из файла
    std::string line;

    // Считываем строки из файла
    while (std::getline(inputFile, line)) {
        bool containsTwoDigitNumber = false;

        // Создаем строковый поток для анализа содержимого строки
        std::istringstream iss(line);

        // Проверяем каждое слово в строке на наличие двузначных чисел
        std::string word;
        while (iss >> word) {
            try {
                // Пробуем преобразовать слово в число
                int number = std::stoi(word);

                if (number >= 10 && number <= 99) {
                    containsTwoDigitNumber = true;
                    break;
                }
            } catch (const std::invalid_argument& e) {
                // Игнорируем слова, которые нельзя преобразовать в число
            }
        }

        if (!containsTwoDigitNumber) {
            std::cout << line << std::endl;
        }
    }

    inputFile.close();

    return 0;
}

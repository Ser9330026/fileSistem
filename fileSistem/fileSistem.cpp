// fileSistem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream> //библиотека файлов stream, осущ. 

bool statistic(std::string str);

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
   // std::string path = "file.txt";//Путь к файлу, который необходимо открыть

    //Класс ofstream для записи в файл
  // std::ofstream out/*(path)*/;//Объект класси ofstream, позволяющий открывать файлы ждля добавления в них текста. Если открываемого файла нет, то онбудет создан
    //out.open(path, std::ios::app);//Открытие файло по указанному пути в указанном режиме. пока файл открыт, сторонние приложения и объекты не могут с ним работать

   // if (out.is_open()) {//Проверка на открытие файла
    //    std::cout << "Файл открыт для записи.\n";
    //    std::cout << "Введите строку: ";
      //      std::string str;
      //      std::getline(std::cin, str);
     //       out << str << '\n';//Добавление текста в файл
     //       std::cout << "Запись добавлена в файл\n";
  //  }
  //  else
      //  std::cout << "Ошибка открытия файла\n";

  //  out.close();//Закрытие файла и очистка объекта out
    //Возможные причины ошибки открытия файлов:
    //1. Файл открыт другим приложением или объектом
    //2. Неправильный  синтаксис указания пути к файлу
    //3. Нет доступа к файлу

    //Класс ifstream для чтения из файла
   // std::ifstream in;
  //  in.open(path);

   // if (in.is_open()) {
    //    std::cout << "Файл открыт для считывания.\n";
    //    std::string file;
        //Посимвольное считывание
       // char sym;
       // while (in.get(sym))
          //  file += sym;
           // std::cout << file;

        //Пословное считывание
        //while (!in.eof()) {//end of file
            //std::string str;
           // in >> str;
           // file += str + ' ';
       // }
       // std::cout << file;

        //Построчное считывание

   //     std::string str;
   //     while (std::getline(in, str))
     //       file += str + "\n";
    //    std::cout << file;

        
  //  }
  //  else
     //   std::cout << "Ошибка открытия файла\n";


   // in.close();

    //Возможные причины ошибок при открытии файла:
    //1. Файл открыт другим приложением или объектом 
    //2. Неправильный синтаксис указания пути к файлу
    //3. Нет доступа к файлу
    //4. Файла не существует

    //Удаление файла

   /* if (remove(path.c_str()) == 0)
        std::cout << "файл " << path << " удален";
    else
        std::cout << "ошибка удаления файла\n";*/

    //задача 1. Слова в файл

    std::cout << "задача 1.\n Введите слово: ";
    std::string word;
    std::getline(std::cin, word);

    if (statistic(word))
        std::cout<< "Слово записано в файл\n";
    else
        std::cout<<"Ошибка выполнения функции\n";



    return 0;
}

bool statistic(std::string str) {
    std::ofstream out;
    std::string path = "words.txt";
    out.open(path, std::ios::app);
    if (out.is_open()) {
        out << str << ' ' << str.length() << '\n';
        out.close();
        return true;
     }
    out.close();
    return false;

}


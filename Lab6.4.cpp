// laba6.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set <string> student_set;
    set <string> student_rep;
    string name;
    cout << "Enter your login: ";
    cin >> name;


    while (name != ".") { // сделать набор из логина
        if (student_set.find(name) != student_set.end()) {
            student_rep.insert(name);// набор, который повторяется здесь
        }
        else
            student_set.insert(name);// все логины здесь

        cout << "Enter your login: ";// цикл заканчивается, когда мы вводим "."
        cin >> name;
    }

    for (auto i : student_rep) // студент, который повторил вход в систему
        student_set.erase(i);// удаляем логин с таким именем и пускаем только первый логин


    cout << "\nAnswer:\n"; // показать всем студент
    for (auto i : student_set)
        cout << "one login: " << i << endl;

    for (auto i : student_rep) // студент, который повторил вход
        cout << "a lot of login: " << i << endl;

}

#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
 void clearScreen();
void displayAnimalData(const string& filePath);
 int main()
{
    clearScreen();
    cout << "\n\t======================================\n";
    cout << "\t     Welcome to the Wildlife Program   \n";
    cout << "\t======================================\n\n\n";
    cout << "This educational program is designed to introduce children to the fascinating world of wildlife!\n";
    cout << "Press Enter to start the program...";
    while (getchar() != '\n')
    {
    }
    clearScreen();
    printf("Program started!\n");
    cout << "Choose an animal to learn more:" << endl;
    cout << "1. Lion" << endl;
    cout << "2. Tiger" << endl;
    cout << "3. Elephant" << endl;
    cout << "4. Fox" << endl;
    cout << "5. Red Panda" << endl;
    int choice;
    cin >> choice;
    clearScreen();
    switch (choice)
    {
    case 1:
        displayAnimalData("D:/CODES/CLASS PROJECTS/cpp/PROJECT QUIZ/docs/lion.txt");
        break;
    case 2:
        displayAnimalData("D:/CODES/CLASS PROJECTS/cpp/PROJECT QUIZ/docs/tiger.txt");
        break;
    case 3:
        displayAnimalData("D:/CODES/CLASS PROJECTS/cpp/PROJECT QUIZ/docs/elephant.txt");
        break;
    case 4:
        displayAnimalData("D:/CODES/CLASS PROJECTS/cpp/PROJECT QUIZ/docs/fox.txt");
        break;
    case 5:
        displayAnimalData("D:/CODES/CLASS PROJECTS/cpp/PROJECT QUIZ/docs/redpanda.txt");
        break;
    default:
        cout << "Invalid choice! Please select a valid animal.";
        break;
    }
    return 0;
}
 void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
 void displayAnimalData(const string& filePath)
{
    ifstream file(filePath);
    string data;
    if (file.is_open())
    {
        while (getline(file, data))
        {
            cout << data << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open the file.";
    }
} 
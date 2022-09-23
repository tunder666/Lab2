#include <iostream>
#include <string>

using namespace std;

void task1()
{
    //triangle
    int num;
    cout << "Enter nubmer: ";
    cin >> num;
    string tr;
    for (int i = 0; i <= num; i++) {
        tr += to_string(i);
        cout << tr << endl;
    }
    system("pause");
}

void task2()
{
    int n, c;
    //check input
    while (true) {
        cout << "Enter n: ";
        cin >> n;
        if (n < 0 || n > 100) {
            cout << "Enter correct value!" << endl;
        }
        else {
            break;
        }
    }
    n = int(n);
    c = n;
    for (int i = 1;i <= n;i++)
    {
        cout << i << ". " << c << endl;
        c = c * (n - i);
        c = c / (i + 1);
    }
    system("pause"); 
}

void task3()
{
    string input;
    int i = 0, sum = 0;
    cout << "If you want to stop typing, type ';'"  << endl;
    while (true) {
        cout << "Enter number: ";
        cin >> input;
        if (input == ";") break;
        sum += stoi(input); //'stoi' func to convert string to int
        i++;
    }
    cout << "Sum of numbers: " << sum << endl;
    cout << "Average of numbers: " << float(sum) / i << endl;
    system("pause");
}

int main()
{
    int choice = 0;
    while (true)
    {
        system("CLS");//clear console
        cout << "===========================\n";
        cout << "1. Task 1\n" << "2. Task 2\n" << "3. Task 3\n" << "4. Exit\n";
        cout << "What do you want to choose? ";
        cin >> choice;
        cout << "===========================\n\n";
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }
        case 2:
        {
            task2();
            break;
        }
        case 3:
        {
            task3();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}
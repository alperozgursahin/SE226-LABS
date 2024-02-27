#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int id;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " + name << endl;
    cout << "What is your student ID?" << endl;
    cin >>id;
    cout << "Your id is: " << id << endl;


    int var1;
    int var2;
    cout << "var1: " << endl;
    cin >> var1;

    cout << "var2: " << endl;
    cin >> var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "Sum:" << sum << endl;
    cout << "diff:" << diff << endl;
    cout << "prod:" << prod << endl;

    string student_name;
    int lab;
    int midterm;
    int final_score;

    cout << "What is your name?" << endl;
    cin >> student_name;

    cout << "Lab Score:" << endl;
    cin >> lab;

    cout << "Midterm Score:" << endl;
    cin >> midterm;

    cout << "Final Score:" << endl;
    cin >> final_score;

    int last_score = (lab*25/100) + (midterm*35/100) + (final_score*40/100);
    cout << "Name: " << student_name << endl;
    cout << "Lab: " << lab << endl;
    cout << "Midterm: " << midterm << endl;
    cout << "Final: " << final_score << endl;
    cout << "Last Score: " << last_score << endl;

    cout << "*\n**\n***\n**\n*123" << endl;



    return 0;
}

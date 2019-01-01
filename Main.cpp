#include <iostream>
#include <string>
#include <Windows.h>

double addNums(double n1, double n2) {
    return n1 + n2;
}
double subNums(double n1, double n2) {
    return n1 - n2;
}
double divNums(double n1, double n2) {
    return n1 / n2;
}
double multNums(double n1, double n2) {
    return n1 * n2;
}
void setTextColor(int colorIndex) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorIndex);
}

int main() {
    // clear the screen
    system("CLS");
    // introduce title
    setTextColor(12); //four and tewlve is red color, black background
    std::string const title = R"~(
oooooo   oooo           .o.             .oooooo.         .oooooo.       
 `888.   .8'           .888.           d8P'  `Y8b       d8P'  `Y8b      
  `888. .8'           .8"888.         888              888              
   `888.8'           .8' `888.        888              888              
    `888'           .88ooo8888.       888              888              
     888      .o.  .8'     `888.  .o. `88b    ooo  .o. `88b    ooo  .o. 
    o888o     Y8P o88o     o8888o Y8P  `Y8bood8P'  Y8P  `Y8bood8P'  Y8P 

    by dec0de 
    )~";
    std::cout << title << std::endl;
    //ask for input of operation
    setTextColor(7); //seven is white color, black background
    std::string choice;
    std::cout << "Choose an operation : Add, Sub, Div, Mult : ";
    std::getline(std::cin, choice);
    //ask for input of numbers
    double n1, n2;
    std::cout << "Input first number : ";
    std::cin >> n1;
    std::cout << "Input second number : ";
    std::cin >> n2;
    //check 'choice' and act accordingly
    if (choice == "Add") {
        double answer = addNums(n1, n2);
        setTextColor(10);
        std::cout << n1 << " + " << n2 << " = " << answer << std::endl;
    } else if (choice == "Sub") {
        setTextColor(10);
        double answer = subNums(n1, n2);
        std::cout << n1 << " - " << n2 << " = " << answer << std::endl;
    } else if (choice == "Div") {
        setTextColor(10);
        double answer = divNums(n1, n2);
        std::cout << n1 << " / " << n2 << " = " << answer << std::endl;
    } else if (choice == "Mult") {
        setTextColor(10);
        double answer = multNums(n1, n2);
        std::cout << n1 << " * " << n2 << " = " << answer << std::endl;
    }
    //set console color back to white
    setTextColor(7);
    return 0;
}
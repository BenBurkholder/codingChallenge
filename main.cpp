#include <iostream>
#include <string>

int mathFunction(int a, int b, std::string op){
    if(op == "+")
        return a+b;
    if(op == "-")
        return a-b;
    if(op == "*")
        return a*b;
    if(op == "/")
        return a/b;
}


int main() {
    float x;
    float y;
    float z;
    std::string op;
    bool pass;

    std::cout << "Please enter first number" << std::endl;
    if (std::cin >> x){
        pass = true;
    }else{
        std::cin.clear();
        std::cin.ignore();
        pass = false;
    };
    while(!pass){
        std::cout << "Entry was not a number, please try again" << std::endl;

        if (std::cin >> x){
            pass = true;
        }else{
            std::cin.clear();
            std::cin.ignore();
            pass = false;
        };
    }

    std::cout << "Please enter desired operator" << std::endl;
    std::cin >> op;
    while(op != "+" && op != "-" && op != "*" && op != "/"){
        std::cout << "Please enter +,-,*, or /" << std::endl;
        std::cin >> op;
    }

    std::cout << "Please enter second number" << std::endl;
    if (std::cin >> y){
        pass = true;
    }else{
        std::cin.clear();
        std::cin.ignore();
        pass = false;
    };
    while(!pass){
        std::cout << "Entry was not a number, please try again" << std::endl;

        if (std::cin >> y){
            pass = true;
        }else{
            std::cin.clear();
            std::cin.ignore();
            pass = false;
        };
    }

    z = mathFunction(x,y,op);
    std::cout << "Your answer is " + std::to_string(z) << std::endl;
    return 0;
}


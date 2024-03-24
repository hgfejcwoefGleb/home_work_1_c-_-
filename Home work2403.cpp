

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <set>
#include <limits>
#include <fstream>
#include <map>
#include <algorithm>
#include <vector>
int taskD(const std::string& expression) {
    std::stack<int> operands;

    std::istringstream iss(expression);
    std::string token;
    while (iss >> token) {
        if (token == "+") {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            operands.push(operand1 + operand2);
        }
        else if (token == "-") {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            operands.push(operand1 - operand2);
        }
        else if (token == "*") {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            operands.push(operand1 * operand2);
        }
        else {
            operands.push(std::stoi(token));
        }
    }

    return operands.top();
}
void taskB() {

}

int main() {
    //std::string expression;
    //std::getline(std::cin, expression);

    //int result = taskD(expression);
    //std::cout << result << std::endl;
    std::ifstream surname_file("input.txt");
    std::map<std::string, int> res;
    std::string line;
    while (std::getline(surname_file, line)) {
        std::istringstream iss(line);
        int classNum;
        std::string name;
        if (iss >> classNum >> name) {
            res.insert(make_pair(name, classNum));
        }
        
    }
    res = {
        {"Иванов", 9},
        {"Петров", 10},
        {"Петров", 11},
        {"Григорьев", 9},
        {"Сергеев", 9},
        {"Яковлев", 10}
    };
    std::vector<std::pair<std::string, int>> vec(res.begin(), res.end());

    // Сортируем вектор по значению
    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; // Сортировка по возрастанию значения
        });

    // Выводим отсортированные пары ключ-значение
    for (const auto& pair : vec) {
        std::cout <<pair.second << " " << pair.first << std::endl;
    }
    surname_file.close();
    return 0;
}


  
    

void taskA() {
    int number_of_dig = 0;
    std::cin >> number_of_dig;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string input_str;
    std::set<int> float_set;
    getline(std::cin, input_str);
    std::istringstream iss(input_str);
    int cur_dig = 0;
    while (iss >> cur_dig)
    {
        float_set.insert(cur_dig);
    }
    std::cout << float_set.size();
}
void taskC() {
    std::string first_player_cards_str;
    getline(std::cin, first_player_cards_str);
    std::string second_player_cards_str;
    getline(std::cin, second_player_cards_str);
    std::deque<int> first_palyer_vec;
    std::deque<int> second_player_vec;
    std::istringstream iss(first_player_cards_str);
    int cur_dig = 0;
    while (iss >> cur_dig)
    {
        first_palyer_vec.push_back(cur_dig);
    }
    std::istringstream iss1(second_player_cards_str);
    int cur_dig1 = 0;
    while (iss1 >> cur_dig1)
    {
        second_player_vec.push_back(cur_dig1);
    }
    int counter = 0;
    while (true) {
        if (counter == 1000000) {
            std::cout << "botva";
            break;
        }
        if (first_palyer_vec.empty()) {
            std::cout << "second " << counter;
            break;
        }
        if (second_player_vec.empty()) {
            std::cout << "first " << counter;
            break;
        }
        else if ((first_palyer_vec[0] == 0) && (second_player_vec[0] == 9)) {
            first_palyer_vec.push_back(first_palyer_vec[0]);
            first_palyer_vec.push_back(second_player_vec[0]);
            first_palyer_vec.pop_front();
            second_player_vec.pop_front();
        }
        else if ((first_palyer_vec[0] == 9) && (second_player_vec[0] == 0)) {
            second_player_vec.push_back(first_palyer_vec[0]);
            second_player_vec.push_back(second_player_vec[0]);
            first_palyer_vec.pop_front();
            second_player_vec.pop_front();
        }
        else if (first_palyer_vec[0] > second_player_vec[0]) {
            first_palyer_vec.push_back(first_palyer_vec[0]);
            first_palyer_vec.push_back(second_player_vec[0]);
            first_palyer_vec.pop_front();
            second_player_vec.pop_front();
        }
        else if (first_palyer_vec[0] < second_player_vec[0]) {
            second_player_vec.push_back(first_palyer_vec[0]);
            second_player_vec.push_back(second_player_vec[0]);
            first_palyer_vec.pop_front();
            second_player_vec.pop_front();
        }
        counter += 1;
    }
}

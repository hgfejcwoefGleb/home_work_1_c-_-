#include <iostream>
#include <stack>
#include <string>

bool isRightBracket(char open, char close) {
    return (open == '(' && close == ')')  (open == '[' && close == ']')  (open == '{' && close == '}');
}

std::string checkBrackets(const std::string& sequence) {
    std::stack<char> s;

    for (char bracket : sequence) {
        if (bracket == '('  bracket == '['  bracket == '{') {
            s.push(bracket);
        }
        else {
            if (s.empty() || !isRightBracket(s.top(), bracket)) {
                return "no";
            }
            s.pop();
        }
    }

    return s.empty() ? "yes" : "no";
}

int main() {
    std::string sequence;
    std::cin >> sequence;

    std::cout << checkBrackets(sequence) << std::endl;

    return 0;
}
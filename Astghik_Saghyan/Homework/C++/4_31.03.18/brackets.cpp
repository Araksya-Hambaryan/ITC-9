#include <iostream>
#include <stack>
#include <string>

bool checkPair(char opening, char closing) {
	if('(' == opening && ')'== closing) {
		return true;
	} else if('{' == opening && '}' == closing) {
		return true;
	} else if('[' == opening && ']' == closing) {
		return true;
	} else {
		return false;
	}
}

bool checkBrack(std::string exp) {
	int i;
	int count = 0;
	std::stack<char> tempStack;
	for(i = 0; i < exp.length(); i++) {
		if('(' == exp[i] || '{' == exp[i] || '[' == exp[i]) {
			tempStack.push(exp[i]);
		} else if(')' == exp[i] || '}' == exp[i] || ']' == exp[i]) {
			if(tempStack.empty() || !checkPair(tempStack.top(),exp[i])) {
				return false;
			} else {
				tempStack.pop();
			}	
		}
		if('"' == exp[i]) {
			count++;	
		}
	}
	if(0 !=count%2) {
		return false;
	}
	return tempStack.empty()? true:false;
}

int main() {
	std::string userExpression;
	std::cout << "Enter an expression:  ";
	std::cin >> userExpression;
	if(checkBrack(userExpression)) {
		std::cout << "The expression is balanced";
	} else {
		std::cout << "The expression is not balanced";
	}
	return 0;
}

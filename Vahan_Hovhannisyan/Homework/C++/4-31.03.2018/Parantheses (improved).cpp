#include <iostream> 
#include <stack> 
#include <string>

  using namespace std;
// Function to check whether two characters are opening 
// and closing of same type. 
bool arePair(char opening, char closing) {
  if ('(' == opening && ')' == closing) return true;
  else if ('{' == opening && '}' == closing) return true;
  else if ('[' == opening && ']' == closing) return true;
  else if ('"' == opening && '"' == closing) return true;
  return false;
}
bool areParanthesesBalanced(string exp) {
  bool quote = true;
  stack < char > s;
  for (int i = 0; i < exp.length(); ++i) {
    if ('(' == exp[i] || '{' == exp[i] || '[' == exp[i])
      s.push(exp[i]);
    else if ('"' == exp[i] && quote) {
      s.push(exp[i]);
      quote = false;
    } else if (')' == exp[i] || '}' == exp[i] || ']' == exp[i]) {
      if (s.empty() || !arePair(s.top(), exp[i]))
        return false;
      else
        s.pop();
    } else if ('"' == exp[i]) {
      if (s.empty() || !arePair(s.top(), exp[i]))
        return false;
      else
        s.pop();
      quote = true;
    }
  }
  return s.empty() ? true : false;
}

int main() {
  /*Code to test the function AreParanthesesBalanced*/
  string expression;
  cout << "Enter an expression and please note it must contain only parantheses and quotes: ";
  cin >> expression;
  if (areParanthesesBalanced(expression))
    cout << "Balanced\n";
  else
    cout << "Not Balanced\n";
}
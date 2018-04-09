
#include < iostream > 
#include < string >
  std::string digit(int tiv, int ham) {
    std::string str = "";
    if (tiv > 0) {
      int arj;
      arj = tiv % ham;
      switch (arj) {
      case 10:
        {
          str += 'A';
          break;
        }
      case 11:
        {
          str += 'B';
          break;
        }
      case 12:
        {
          str += 'C';
          break;
        }
      case 13:
        {
          str += 'D';
          break;
        }
      case 14:
        {
          str += 'E';
          break;
        }
      case 15:
        {
          str += 'F';
          break;
        }
      default:
        {
          str += std::to_string(arj);
          break;
        }
      }
      digit(tiv / ham, ham);
    }
    std::cout << str;
    return str;
  }

int main() {
  int tiv;
  int ham;
  std::cout << "nermuceq tiv@\n";
  std::cin >> tiv;
  std::cout << "\nnermuceq hamakarg@\n";
  std::cin >> ham;
  if (tiv > 0 && ham > 1 && ham <= 16) {
    std::cout << tiv << "-@ " << ham << "-akan hamakargum klini\n";
    digit(tiv, ham);
  } else {
    std::cout << "stugeq mutqagrvac tvyalner@";
  }
  return 0;
}

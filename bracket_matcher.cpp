#include <iostream>
#include <string>

int bracket_matcher(std::string str) {
  
  int opening_br = 0, closing_br = 0;

  for (char c : str) {

    if (c == '(') { opening_br++; }
    else if (c == ')') { closing_br++; }

  }

  if (opening_br == closing_br) { return 1; }

  return 0; 

}

int main() { 

  std::cout << bracket_matcher("((hello(world)))");
  
  return 0;
  
}
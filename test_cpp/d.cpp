#include <iostream>
#include <map>

int add(int i, int j) { return i+j; }
int sub(int i, int j) { return i-j; }

typedef int (*FnPtr)(int, int);

int main() {
  // initialization:
  std::map<std::string, FnPtr> myMap;
  myMap["add"] = add;
  myMap["sub"] = sub;
  // usage:
  std::string s("add");
  int res = myMap[s](2,3);
  std::cout << res;
}

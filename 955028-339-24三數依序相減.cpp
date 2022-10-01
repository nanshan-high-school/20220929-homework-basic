#include <iostream>
using namespace std;

int main() {
  std::cout << "請輸入三個要相減的數字:";

  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  cout << "三數依序相減結果num1 - num2 - num3 = " << num1-num2-num3;
}
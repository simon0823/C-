#include <iostream>
#include <string.h>

using namespace std;

struct tagData {
  char ID[20];
  char Password[20];
};

int main(void) {
  tagData * p = new tagData[3];
  
  for(int i = 0; i < 3; i++) {
    cout << i << "번째 아이디를 입력해주세요.";
    cin >> p[i].ID;
    cout << i <<"번째 비밀번호를 입력해주세요.";
    cin >> p[i].Password;
  }

  for(int i = 0; i < 3; i++) {
    cout << endl;
    cout << i << "번째 아이디는 " << p[i].ID << "입니다" << endl;
    cout << i << "번째 비밀번호는 " << p[i].Password << "입니다" << endl;
  }

  delete []p;

  return 0;
}

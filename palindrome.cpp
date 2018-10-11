//회문 구하기

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//namespace queue_space {
    string queue_process(string word) {

        int num = word.length();

        char word_array[num+1];

        strcpy(word_array, word.c_str());

        std::queue <char> myqueue;

        for(int i = 0; i < num; i++) {
            myqueue.push(word_array[i]);
        }

        string queue_arr[num+1];

        int n = 0;
        while (!myqueue.empty()) {
            queue_arr[n] = myqueue.front();
            n += 1;
            myqueue.pop();
        }

        string result;

        for(int i = 0; i < num; i++) {
            result += queue_arr[i];
        }

        return result;
    }
//}

//namespace stack_space {
    string stack_process(string word) {

        int num = word.length();

        char word_array[num+1];

        strcpy(word_array, word.c_str());

        std::stack<char> mystack;

        for(int i = 0; i < num; i++) {
            mystack.push(word_array[i]);
        }

        string stack_arr[num+1];

        int n = 0;
        while(!mystack.empty()) {
            stack_arr[n] = mystack.top();
            n += 1;
            mystack.pop();
        }

        string result;

        for(int i = 0; i < num; i++) {
            result += stack_arr[i];
        }

        return result;

    }
//}

int main() {
    string word;

    cout << "딘어를 입력해주세요 : ";

    cin >> word;

    int num = word.length();

    string queue_result = queue_process(word);
    string stack_result = stack_process(word);

    if(queue_result.compare(stack_result) == 0) {
        cout << "true";
    }else {
        cout << "false";
    }

    return 0;
} 

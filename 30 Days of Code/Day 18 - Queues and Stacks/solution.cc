#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    private:
        stack<char> word_stack;
        queue<char> word_queue;
    public:
        void pushCharacter(char ch){
            word_stack.push(ch);
        }
    
        void enqueueCharacter(char ch){
            word_queue.push(ch);
        }
        
        char popCharacter(){
            char next_char = word_stack.top();
            word_stack.pop();
            return next_char;
        }
    
        char dequeueCharacter(){
            char next_char = word_queue.front();
            word_queue.pop();
            return next_char;
        }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}

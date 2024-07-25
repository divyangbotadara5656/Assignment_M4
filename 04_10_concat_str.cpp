#include <iostream>
using namespace std;

class StringConcatenator {
private:
    string content;
public:
    StringConcatenator() {
    }
    StringConcatenator(string s) {
        content = s;
    }
    void display() {
        cout << "Concatenated string: " << content;
    }

    StringConcatenator operator+(const StringConcatenator& obj) const {
        StringConcatenator result;
        result.content = content + obj.content;
        return result;
    }
};

int main() {
    StringConcatenator str1("jigu");
    StringConcatenator str2("dvs");
    StringConcatenator str3;
    str3 = str1 + str2;
    str3.display();

    return 0;
}


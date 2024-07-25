#include<iostream>
using namespace std;

class PrivateClass
{
private:
    void showPrivate() {
        cout << "\n Private";
    }
public:
    void accessPrivate() {
        showPrivate();
    }
};

class ProtectedClass
{
protected:
    void showProtected() {
        cout << "\n Protected";
    }
};

class PublicClass : public ProtectedClass, public PrivateClass
{
public:
    void showPublic() {
        cout << "\n Public";
    }
    void displayAll() {
        accessPrivate();
        showProtected();
        showPublic();
    }
};

int main() {
    PublicClass obj;
    obj.displayAll();

    return 0;
}


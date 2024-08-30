#include <iostream>
using namespace std;

class Cuboid {
private:
    float length;
    float width;
    float height;

public:
    void inputDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }
    float calculateVolume() const {
        return length * width * height;
    }

    void displayVolume() const {
        cout << "Volume of the cuboid is: " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.inputDimensions();  
    cuboid.displayVolume(); 
    return 0;
}

/*
Enter length: 6
Enter width: 6
Enter height: 6
Volume of the cuboid is: 216
    */

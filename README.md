# Classes-and-Objects
## Experiment 11


## Aim
To perform classes and objects


### APPARATUS
VS Code

### THEORY

#### Classes
 
A class is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data and functions that operate on the data into a single unit. The primary purpose of a class is to represent real-world entities or concepts in a program. 

A class in C++ is defined using the `class` keyword followed by the class name and a set of curly braces `{}`. Inside these braces, we can define:

- **Data Members**: Variables that hold the state of the object.
- **Member Functions**: Functions that operate on the data members and provide functionality to the object.

example of a class definition:

```cpp
class Car {
public:
    // Data Members
    std::string brand;
    int year;

    // Member Functions
    void start() {
        std::cout << "The car has started." << std::endl;
    }

    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};
```

#### Objects

An object is an instance of a class. When you create an object, you allocate memory for it based on the class's blueprint. Each object has its own set of data members and can use the member functions defined in the class.

example of object in C++:

```cpp
int main() {
    // Create an object of the Car class
    Car myCar;

    // Set data members
    myCar.brand = "Toyota";
    myCar.year = 2022;

    // Call member functions
    myCar.start();
    myCar.displayInfo();

    return 0;
}
```

Classes use access specifiers:

- **`public`**: Members are accessible from outside the class.
- **`private`**: Members are accessible only within the class.
- **`protected`**: Members are accessible within the class and by derived classes.



## Algorithm for inside class


 **Define `student` Class**:
   - **Start Class**: `class student {`
   - **Public Section**: Declare accessible members with `public:`
   - **Define `studyyear` Method**: Prints `"2023-2027"` to the console.
     - `void studyyear() { cout << "2023-2027"; }`
   - **End Class**: `};`

 **Implement `main` Function**:
   - **Create Object**: Instantiate `student` class.
     - `student s1;`
   - **Call Method**: Invoke `studyyear` method on `s1`.
     - `s1.studyyear();`
   - **Exit Program**: Return 0 to indicate successful execution.
     - `return 0;`





## Algorithm of outside class


 **Define `student` Class**:
   - **Declare Class**: `class student {`
   - **Public Method**: `void studyyear();`
   - **End Class**: `};`
 **Implement `studyyear`**:
   - **Define Outside Class**: `void student::studyyear() { cout << "2023-2027"; }`
 **Main Function**:
   - **Create Object**: `student s1;`
   - **Call Method**: `s1.studyyear();`
   - **Return**: `return 0;`

---





## Algorithm of volume of cuboid


 **Define `Cuboid` Class**:
   - **Private Members**: `float length, width, height;`
   - **Public Methods**:
     - `inputDimensions()`: Read length, width, and height from user.
     - `calculateVolume()`: Compute and return volume.
     - `displayVolume()`: Output the volume.

 **In `main` Function**:
   - **Create Object**: `Cuboid cuboid;`
   - **Call Methods**:
     - `cuboid.inputDimensions();`
     - `cuboid.displayVolume();`
   - **Return**: `return 0;`

---




## Conclusion
In this experiment we learned about classes and objects










// This example is converting the last program 2.10
// made with functions and structures to a C++
// program using concepts of Object Oriented Programming
// such as Classes, Contructors, Methods and Attributes

class Rectangle {
    
    private: int length;
    private: int breadth;

    public: Rectangle() // Default Constructor
    {
        length = 0;
        breadth = 0;
    }

    public: Rectangle(int l, int b) // Parametrized Constructor
    {
        length = l;
        breadth = b;
    }

    public: int area() // Helpers
    {
        return length * breadth;
    }

    public: int perimeter() // Helpers
    {
        return 2 * (length + breadth);
    }

    public: void setLength(int l) // Setters
    {
        length = l;
    }

    public: void setBreadth(int b) // Setters
    {
        breadth = b;
    }

    public: int getLength() // Getters
    {
        return length;
    }

    public: int getBreadth() // Getters
    {
        return breadth;
    }

    ~Rectangle() // Destructor
    {
        // Delete memory dinamically allocated
    }
};

int main()
{
    Rectangle r(10, 5); // Initialization of object of the Class Rectangle

    r.area();
    r.perimeter();
    r.setLength(20);
    r.setBreadth(10);
    r.getLength();
    r.getBreadth();
}
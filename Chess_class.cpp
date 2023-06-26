
#include <iostream>
#include <string>

class Chess {
private :

public:
    virtual void move() = 0;

    Chess()
    {
        std::cout << "Chess default constructor\n";
    }

    virtual ~Chess()
    {
        std::cout << "Chess destructor\n";
    }

};

class Soldier : public Chess
{
private:
    std::string name;
    std::string color;

public:
    Soldier()
    {
        std::cout << "Soldier Default constructor\n";
        name = " ";
        color = " " ;
    }

    Soldier(std::string n, std::string c)
    {
        std::cout << "Soldier Parametrized constructor\n";
        name = n;
        color = c;
    }

    ~Soldier()
    {
        std::cout << "Soldier Destructor\n";
    }

    void move() 
    {
        std::cout << "Soldier can move only forward (1 or 2 steps)\n";
    }

    std::string getColor()
    {
        return color;
    }

    void setColor(bool flag) 
    {
        if (flag == false)
        {
            color = "black";
        }
        else
        {
            color = "white";
        }
        std::cout << "Soldier is " << color << "\n";
    }

};


class Knight : public Chess
{
private:
    std::string name;
    std::string color;

public:
    Knight()
    {
        std::cout << "Knight Default constructor\n";
        name = " ";
        color = " ";
    }

    Knight(std::string n, std::string c)
    {
        std::cout << "Knight Parametrized constructor\n";
        name = n;
        color = c;
    }

    ~Knight()
    {
        std::cout << "Knight Destructor\n";
    }

    void move()
    {
        std::cout << "Knight can move in L shape \n";
    }

    std::string getColor()
    {
        return color;
    }

    void setColor(bool flag)
    {
        if (flag == false)
        {
            color = "black";
        }
        else
        {
            color = "white";
        }
        std::cout << "Kinight is " << color << "\n";
    }
};



class Rook : public Chess
{
    private:
        std::string name;
        std::string color;

    public:
        Rook()
        {
            std::cout << "Rook Default constructor\n";
            name = " ";
            color = " ";
        }

        Rook(std::string n, std::string c)
        {
            std::cout << "Rook Parametrized constructor\n";
            name = n;
            color = c;
        }

        ~Rook()
        {
            std::cout << "Rook Destructor\n";
        }

        void move()
        {
            std::cout << "Rook can move in straight line (forwards and backwards) \n";
        }

        std::string getColor()
        {
            return color;
        }

        void setColor(bool flag)
        {
            if (flag == false)
            {
                color = "black";
            }
            else
            {
                color = "white";
            }
            std::cout << "Rook is " << color << "\n";
        }
};



class Queen : public Chess
{
private:
    std::string name;
    std::string color;

public:
    Queen()
    {
        std::cout << "Queen Default constructor\n";
        name = " ";
        color = " ";
    }

    Queen(std::string n, std::string c)
    {
        std::cout << "Queen Parametrized constructor\n";
        name = n;
        color = c;
    }

    ~Queen()
    {
        std::cout << "Queen Destructor\n";
    }

    void move()
    {
        std::cout << "Queen can move in any direction \n";
    }

    std::string getColor()
    {
        return color;
    }

    void setColor(bool flag)
    {
        if (flag == false)
        {
            color = "black";
        }
        else
        {
            color = "white";
        }
        std::cout << "Queen is " << color << "\n";
    }
};



class Bishop : public Chess
{
private:
    std::string name;
    std::string color;

public:
    Bishop()
    {
        std::cout << "Bishop Default constructor\n";
        name = " ";
        color = " ";
    }

    Bishop(std::string n, std::string c)
    {
        std::cout << "Bishop Parametrized constructor\n";
        name = n;
        color = c;
    }

    ~Bishop()
    {
        std::cout << "Bishop Destructor\n";
    }

    void move()
    {
        std::cout << "Bishop can move diagonally \n";
    }

    std::string getColor()
    {
        return color;
    }

    void setColor(bool flag)
    {
        if (flag == false)
        {
            color = "black";
        }
        else
        {
            color = "white";
        }
        std::cout << "Bishop is " << color << "\n";
    }
};



class King : public Chess
{
private:
    std::string name;
    std::string color;

public:
    King()
    {
        std::cout << "King Default constructor\n";
        name = " ";
        color = " ";
    }

    King(std::string n, std::string c)
    {
        std::cout << "King Parametrized constructor\n";
        name = n;
        color = c;
    }

    ~King()
    {
        std::cout << "King Destructor\n";
    }

    void move()
    {
        std::cout << "King can move in any direction, but only one step \n";
    }

    std::string getColor()
    {
        return color;
    }

    void setColor(bool flag)
    {
        if (flag == false)
        {
            color = "black";
        }
        else
        {
            color = "white";
        }
        std::cout << "King is " << color << "\n";
    }
};


int main()
{
    Chess* ptr = new Knight;
    ptr->move();

    Chess* ptr1 = new Rook("Rook", "white");
    ptr1->move();

    Queen q;
    q.setColor(false);

    delete ptr;
    delete ptr1;

    return 0;
}


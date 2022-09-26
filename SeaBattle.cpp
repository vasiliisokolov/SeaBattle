#include <iostream>

void fill_the_field(bool player1[][10], bool player2[][10]);
void show_field(bool player[][10]);
void place_ship(bool player[][10], int, int);
void place_all_ship(bool player[][10]);
bool check_input(int y, int x, int z, int c);

int main()
{
    std::cout << "Sea Battle!" << std::endl;
    bool player1[10][10];
    bool player2[10][10];
    fill_the_field(player1, player2);
    std::string p1, p2;
    
    std::cout << "Welcome! Please, introduce yourself!" << std::endl;
    std::cout << "Player 1, enter you name: ";
    std::cin >> p1;
    std::cout << "Player 2, enter you name: ";
    std::cin >> p2;
    std::cout << "Admiral " << p1 << ", fill your field: " << std::endl;
    place_all_ship(player1);
}

void fill_the_field(bool player1[][10], bool player2[][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            player1[i][j] = false;
            player2[i][j] = false;
        }
    }
}

void show_field(bool player[][10])
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            std::cout << player[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void place_ship(bool player[][10], int y, int x)
{
    player[y][x] = true;

}

void place_all_ship(bool player[][10])
{
    //4х палубный.
    int x, y, z, c;
    show_field(player);
    std::cout << "Enter coordinates of your fourdeck ship: \n";
    std::cout << "Beginning: \n";
    std::cin >> y >> x;
    std::cout << "End: \n";
    std::cin >> z >> c;
    place_ship(player, y, x);
    for (int i = 0; i < 10; i++)
    {
        show_field(player);
        std::cout << "Enter coordinates of your ship: \n";
        std::cin >> y >> x;
        place_ship(player, y, x);
    }
}

bool check_input(int y, int x, int z, int c)
{
    return false;
}

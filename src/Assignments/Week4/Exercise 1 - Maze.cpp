#include <iostream>
#include <string>

using namespace std;

typedef enum {wood, stone} material;

struct tile {
    int x, y;
    bool isWall;
    material type;
};

#define NROWS 12
#define NCOLS 16

// Initialize the playground with borders being walls made of stone and all other tiles being wood
void InitializePlayground(tile *playground)
{
    for (int i = 0; i < NROWS; i++)
    {
        for (int j = 0; j < NCOLS; j++)
        {
            playground[i * NCOLS + j].x = i;
            playground[i * NCOLS + j].y = j;
            playground[i * NCOLS + j].isWall = ((i == 0 && j!=3) || i == NROWS - 1 || j == 0 || j == NCOLS - 1);
            playground[i * NCOLS + j].type = (playground[i * NCOLS + j].isWall ? stone : wood);
        }
    }
}

// Print the playground with player on position x and y
void PrintPlayground(tile *playground, int x, int y)
{
    for (int i = 0; i < NROWS; i++)
    {
        for (int j = 0; j < NCOLS; j++)
        {
            char out = ' ';
            (playground[i * NCOLS + j].x == x && playground[i * NCOLS + j].y == y) ? out = 'O' : 0;
            (playground[i * NCOLS + j].isWall) ? out = '*' : 0;
            cout << out;
        }
        cout << endl;
    }
}


int main()
{
    tile playground[NROWS][NCOLS];
    InitializePlayground(*playground);
    int x = 5, y = 5;

    PrintPlayground(*playground, x, y);
    char command;
    while (cin >> command && command != 'q')
    {
        (command == 'u' && !playground[y - 1][x].isWall) ? y-- : 0;
        (command == 'd' && !playground[y + 1][x].isWall) ? y++ : 0;
        (command == 'l' && !playground[x - 1][x].isWall) ? x-- : 0;
        (command == 'r' && !playground[x + 1][x].isWall) ? x++ : 0;
        PrintPlayground(*playground, x, y);
    }
    return 0;
}

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

typedef enum
{
    wood,
    stone
} material;

struct tile
{
    int x, y;
    bool isWall;
    material type;
};

// Initialize the playground with borders being walls made of stone and all other tiles being wood
void InitializePlayground(int nRows, int nCols, tile **playground)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            playground[i][j].x = i;
            playground[i][j].y = j;
            playground[i][j].isWall = ((i == 0 && j != 3) || i == nRows - 1 || j == 0 || j == nCols - 1);
            playground[i][j].type = (playground[i][j].isWall ? stone : wood);
        }
    }
}

// Print the playground with player on position x and y
void PrintPlayground(int nRows, int nCols, tile **playground, int x, int y)
{
    // cout << "x position " << x << " y position " << y << endl;
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            char out = ' ';
            (playground[i][j].x == x && playground[i][j].y == y) ? out = 'O' : 0;
            (playground[i][j].isWall) ? out = '*' : 0;
            cout << out;
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    int x = rows/2, y = cols/2;
    
    tile **playground = new tile*[rows];
    for (int i = 0; i < rows; i++)
    {
        playground[i] = new tile[cols];
    }

    InitializePlayground(rows, cols, playground);
    
    PrintPlayground(rows, cols, playground, x, y);
    char command;
    while (cin >> command && command != 'q')
    {
        (command == 'u' && !playground[x-1][y].isWall) ? x-- : 0;
        (command == 'd' && !playground[x+1][y].isWall) ? x++ : 0;
        (command == 'l' && !playground[x][y-1].isWall) ? y-- : 0;
        (command == 'r' && !playground[x][y+1].isWall) ? y++ : 0;
        PrintPlayground(rows, cols, playground, x, y);
    }
    return 0;
}

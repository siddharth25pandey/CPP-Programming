#include <bits/stdc++.h>
using namespace std;
bool found = false;
void print(int cell[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << cell[i][j] << " ";
        }
        cout << endl;
    }
}
bool valid(int cell[9][9], int r, int c)
{
    //it is valid if same value is not stored in row or col or mini box
    int br = r / 3;
    int bc = c / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (cell[r][c] == cell[3 * br + i][3 * bc + j] && (3 * br + i) != r && (3 * bc + j) != c)
            {
                return false;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (cell[r][c] == cell[i][c] && i != r)
        {
            return false;
        }
        if (cell[r][c] == cell[r][i] && i != c)
        {
            return false;
        }
    }
    return true;
}
bool solved(int cell[9][9])
{
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            //for each cell check 3 conditions
            //1. This cell value should not repeat in entire row
            //2. This cell value should not repeat in entire col
            //3. This cell value should not repeat in entire 3*3 mini box
            for (int r = 0; r < 9; r++)
            {
                for (int c = 0; c < 9; c++)
                {
                    if (!valid(cell, r, c))
                        return false;
                }
            }
        }
    }
    return true;
}
void backtrack(int cell[9][9], int &k)
{
    if (found)
        return;
    //if we are at search space (or this is leaf node)
    if (k == 81)
    {
        if (solved(cell))
        {
            cout << "Solution of sudoku puzzle is >> " << endl;
            print(cell);
            found = true;
        }
        return;
    }
    //cout << k << endl;
    //print(cell);
    int c = k % 9;
    int r = k / 9;
    //cout << r << " " << c << endl;
    k++;
    for (int val = 1; val <= 9; val++)
    {
        if (cell[r][c] != 0)
        {
            if (valid(cell, r, c))
            {
                backtrack(cell, k);
                break;
            }
            else
                return;
        }
        cell[r][c] = val;
        if (valid(cell, r, c))
            backtrack(cell, k);
        cell[r][c] = 0;
    }
    k--;
}

int main()
{
    //int cell[9][9];
    int cell[9][9] = {
        {0, 2, 0, 0, 0, 4, 3, 0, 0},
        {9, 0, 0, 0, 2, 0, 0, 0, 8},
        {0, 0, 0, 6, 0, 9, 0, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 7, 2, 5, 0, 3, 6, 8, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 0, 2, 0, 5, 0, 0, 0},
        {1, 0, 0, 0, 9, 0, 0, 0, 3},
        {0, 0, 9, 8, 0, 0, 0, 6, 0}};
    printf("This is suduko solver of size 9*9\n");
    printf("Would you like to have custom initial input ? y=yes, n=no\n");
    char ch = getchar();
    if(ch=='n') goto SkipInput;
    for(int i=0;i<9;i++){
        printf("Enter 9 entries for row %d\n",i+1);
        for(int j=0;j<9;j++){
            scanf("%d",&cell[i][j]);
            assert(cell[i][j]>=0 && cell[i][j]<=9);
        }
    }
    SkipInput:
    print(cell);
    int k = 0;
    backtrack(cell, k);
}

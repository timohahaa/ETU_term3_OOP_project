
#ifndef GAMECONTROLER_H
#define GAMECONTROLER_H

#include "field.h"

struct result {
    bool hasNumber;
    int number;
    bool gameEnded;
};

class gameControler
{
public:
    gameControler(int N, int M, int K);
    result openCell(int row, int col);
    void setNumberToCell(int row, int col, int number);
    int getSumOfOpenedCells();
    int getOpenNumberCellsCount();
private:
    int N_fieldSize;
    int M_numberCount;
    int K_numberOfTurns;
    int _sumOfOpenedCells = 0;
    int _countOpenNumberCells;
    int _turnsMade = 0;
    field _field;

    bool gameHasEnded();
};

#endif // GAMECONTROLER_H

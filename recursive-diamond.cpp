#include <iostream>
using namespace std;

void printRow(int level){
    if (level == 0){
        for (int i = 0; i < 11; ++i){
            cout << "*";
        }
        for (int i = 0; i < 3;  ++i){
            cout << " ";
        }
        for (int i = 0; i < 11; ++i){
            cout << "*";
        }
    }
    else{
        int leftAsterisks = 11 - level;
        int middleAsterisks = 2 * level - 1;
        int Spaces  = 2;

        for (int i = 0; i < leftAsterisks; ++i){
            cout << "*";
        }
        for (int i = 0; i < Spaces; ++i){
            cout << " ";
        }
        for (int i = 0; i < middleAsterisks; ++i){
            cout << "*";
        }
        for (int i = 0; i < Spaces; ++i){
            cout << " ";
        }
        for (int i = 0; i < leftAsterisks; ++i){
            cout << "*";
        }
    }

    cout << endl;
}

void printInner(int level, int maxLevel){
    printRow(level);

    if (level == maxLevel){
        return;
    }

    printInner(level + 1, maxLevel);

    printRow(level);
}

int main(){
    const int WIDTH = 25;
    const int MAXLEVEL = 7;

    for (int i = 0; i < WIDTH; ++i){
        cout << "*";
    }
    cout << endl;

    printInner(0, MAXLEVEL);

    for (int i = 0; i < WIDTH; ++i){
        cout << "*";
    }
    cout << endl;

    return 0;
}

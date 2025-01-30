#include <iostream>

using namespace std;
//The array queens[] is used to record every q's location
//Ex. queens[m] = n     <<< m is collumn n is row???

const int MAX = 8; //8 Queens

class QueenPuzzle{
    int queens[MAX]; //8 queens

    public: 
        void printOut();
        int isValid(int n); // determine is n is valid
        void placeQueen(int i);
};

int QueenPuzzle::isValid(int n){
    //compare the queen n with previous n - 1 queens
    for (int i = 0; i < n; i++)
    {
        if(queens[i] == queens[n]){
            return 0;
        }
        if ((n - i) - abs(queens[i] - queens[n]))
        {
            return 0;
        }
    }
    return 1;
}

void QueenPuzzle::placeQueen(int i){
    
}

void QueenPuzzle:: printOut(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(j == queens[i]){
                cout << "Q ";
            }
            else{
                cout << "O ";
            }
        }
        cout << endl;
    }

    cout << endl << "Please press 'q' key to quit, otherwise continue..." << endl;

    char k = '\0';
    cin >> k;

    if(k == 'q'){
        exit(0);
    }
        
}

int main(int argc, char* argv[]){
    QueenPuzzle QP;

    QP.placeQueen(0);


    return 0;
}
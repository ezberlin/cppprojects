#include <iostream>
using namespace std;

enum chessSquare
{
    empty =0,
    whitePawn,
    whiteKnight,
    whiteBishop,
    whiteRook,
    whiteQueen,
    whiteKing,
    blackPawn,
    blackKnight,
    blackBishop,
    blackRook,
    blackQueen,
    blackKing
};

int main()
{
    chessSquare board[8][8] ={
                        {whiteRook, whiteKnight, whiteBishop, whiteQueen, whiteKing, whiteBishop, whiteKnight, whiteRook},
                        {whitePawn, whitePawn, whitePawn, whitePawn, whitePawn, whitePawn, whitePawn, whitePawn},
                        {empty, empty, empty, empty, empty, empty, empty, empty},
                        {empty, empty, empty, empty, empty, empty, empty, empty},
                        {empty, empty, empty, empty, empty, empty, empty, empty},
                        {empty, empty, empty, empty, empty, empty, empty, empty},
                        {blackPawn, blackPawn, blackPawn, blackPawn, blackPawn, blackPawn, blackPawn, blackPawn},
                        {blackRook, blackKnight, blackBishop, blackQueen, blackKing, blackBishop, blackKnight, blackRook}
    };
    std::cout<<"----------------------------------------------------------------\n";
    for (int i=0; i<8; i++)
    {
        std::cout<<"|";
        for (int j=0; j<8; j++)
        {
            std::cout<<board[i][j]<<"\t"<<"|";
        }
        std::cout<<"\n----------------------------------------------------------------\n";
    
    }
    return 0;   
}

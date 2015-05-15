#include <iostream>
#include "game.h"
#include "board.h"

Game *Game::instance = 0 ;

Game::Game()
{
	std::cout << "making game" << std::endl;
	turn = 1 ;
	playerOneScore = 0 ;
	playerTwoScore = 0 ;
	Board *currBoard = Board::getInstance() ;
}

Game *Game::getInstance() 
{
	if (!instance)
	{
		instance = new Game ;
	}
	return instance ;
}

int Game::takeTurn()
{
	std::cout << currBoard << std::endl ;
	int choosenCol = -1 ;
	if (turn == 1)
	{
		std::cout << "Player 1's Turn! Choose a column" << std::endl ;
		turn = 2 ;
	}
	else 
	{
		std::cout << "Player 2 Turn! Choose a column" << std::endl ;
		turn = 1 ;
	}
	std::cin >> choosenCol ;
	while (choosenCol > 5 || choosenCol < 0 || std::cin.fail())
	{
		std::cout << "Please enter a column number between 0 - 5" << std::endl ;
		std::cin.clear() ;
		std::cin >> choosenCol ;
	}
	int gamePlace = Game::currBoard->dropPiece(choosenCol) ;
	if (gamePlace == 1)
	{
		endGame() ;
		return 1;
	}
	return 0 ;
}

void Game::printScore()
{
	std::cout << "Score:" << std::endl ;
	std::cout << "Player 1: " << playerOneScore << std::endl ;
	std::cout << "Player 2: " << playerTwoScore << std::endl ;
}  	

void Game::endGame()
{
	int winner ;
	if (playerOneScore > playerTwoScore) {winner = 1;}
	else if (playerOneScore == playerTwoScore) {winner = 3;}
	else {winner = 2;}
	if (winner == 3) {std::cout << "It's a draw!" << std::endl;}
	else {std::cout << "Congrats! Player " << winner << " wins!" << std::endl;}
	currBoard->clearBoard() ;
	playerOneScore = 0 ;
	playerTwoScore = 0 ;
	turn = 1 ;
}


 

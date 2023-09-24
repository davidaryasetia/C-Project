#include<iostream>
#include<vector>
#include <algorithm> 
std::vector<std::vector<char>>position;
std::vector<int>v;
char user1 = 'x';
char user2 = 'o';
int pos;

void gridPosition()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			std::cout << "|" << ((i*3)+j+1) << "|";
		};
		std::cout << "\n";
	};
}


void resetGrid()
{
	for (int i = 0; i < 3; i++) {
		std::vector<char>temp;
		for (int j = 0; j < 3; j++) {
			temp.push_back('_');
		};
		position.push_back(temp);
	};
	
}

void userInput(int pos,char u)
{
	int row=(pos-1)/3;
	int col=(pos-1)%3;
	position[row][col] = u;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << "|" << position[i][j] << "|";
		};
		std::cout << "\n";
	};
	std::cout << "\n\n\n";
}


int chk(int ck)
{
	if (v.size() > 0)
	{
		for (int i = 0; i < 100; i++)
		{
			std::vector<int>::iterator it;
			it = std::find(v.begin(), v.end(), ck);
			if (it != v.end())
			{
				std::cout << "\nPlayer already enter value at " << ck << " position please enter another value\n";
				std::cin >> ck;
				
			}
			else
			{
				v.push_back(ck);
				return ck;
				break;
			}
		}
	}
	else
	{
		v.push_back(ck);		
		return ck;
	}	
}


bool chkwin()
{
	//cheak horizontal and vertical
	for (int i = 0; i < 3; i++)
	{
		if (((position[i][0] == position[i][1]) && (position[i][1] == position[i][2])) && (position[i][0] != '_')) {
			if (position[i][0] == 'x') {
				std::cout << "winner is User1=x\n";
				return true;
			}
			else {
				std::cout << "winner is User2=o\n";
				return true;
			}
		}

		else if (((position[0][i] == position[1][i]) && (position[1][i] == position[2][i])) && (position[0][i] != '_')) {
			if (position[0][i] == 'x') {
				std::cout << "winner is User1=x\n";
				return true;
			}
			else {
				std::cout << "winner is User2=o\n";
				return true;
			}
		}

	}


	//cheak diagonal
	if (((position[0][0] == position[1][1]) && (position[1][1] == position[2][2])) && (position[0][0] != '_')) {
		if (position[0][0] == 'x') {
			std::cout << "winner is User1=x\n";
			return true;
		}
		else {
			std::cout << "winner is User2=o\n";
			return true;
		}
	}
	else if (((position[2][0] == position[1][1]) && (position[1][1] == position[0][2])) && (position[2][0] != '_')) {
		if (position[2][0] == 'x') {
			std::cout << "winner is User1=x\n";
			return true;
		}
		else {
			std::cout << "winner is User2=o\n";
			return true;
		}
	}
}


void gamePlay()
{
	for (int i = 0; i < 9; i++)
	{
		std::cout << "Please select position\n";
		gridPosition();
		std::cin >> pos;
		if (i % 2 == 0)
		{
			userInput(chk(pos), user1);
		}
		else
		{
			userInput(chk(pos), user2);
		}
		if (chkwin() == true)
		{
			break;
		}
		if (i == 8)
		{
			std::cout << "match tie\n";
		}
	}
}
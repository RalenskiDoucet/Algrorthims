#include<iostream>
#include<assert.h>

//Longest Value in the collection of.
//
//int SearchLargest(int*Collection, int numberofItems)
//{
//	//check if collection is empty.
//	if(numberofItems, numberofItems <= 0,numberofItems++);
//	// Assume 1st number in  the set is the largest.
//	//Create new Variable of type int.
//	int LargestNum;
//	//Create a loop that iterates over the collection.
//	//if current value is greater than current largest.
//	if (LargestNum, LargestNum >= 0,LargestNum++);
//	//int LargestNum is assigned to current value.
//	for (LargestNum; LargestNum = 1; LargestNum++)
//	{
//
//	}
//
//	//return Largest value.
//}
class Cell
{
public:
	char *m_Token;
	Cell()
	{
		m_Token;
	};
	Cell(char *Token)
	{
		m_Token = Token;
	};
	bool operator==(Cell&other)
	{
		if (m_Token == other.m_Token)
		{
			return true;
		}
		if (m_Token != other.m_Token)
		{
			return false;
		}

	};
};
class Column
{
public:
	int m_Height;
	Cell *m_Cells;
	Column()
	{
		m_Cells[7];
		m_Height;
	}
	Column(int Height)
	{
		m_Height = Height;
	}
	int mLastOccupied(int Last)
	{//Checks the last cell that a token was placed in.
		int LO;
		LO = Last;
		for (m_Cells[LO]; LO <= 5; LO++)
		{
			return Last;
		}
	}

	bool isFull()
	{
		{
			int i;
			for (m_Cells[i]; i = 5; i++)
			i = m_Height;
			return true;
		}
		return false;
	}
	bool PlaceToken(char Token)
	{
		// If there was no piece in current cells and the said cell was selected return true else false.
		int i;
		for (m_Cells[i] = NULL; i = NULL;)
		{
			return true;
		}
		return false;
	}

};
class ConnectFour
{
public:
	Column *m_Column()
	{
		Cell m_Cells[6];
		m_Cells[6];
	}
	char ActiveToken;
	int m_NumofCols;
	int *m_ColHeigth;
	bool PlacePiece(int col)
		//Refers to the PlaceToken bool to check if cell is epmty to allow piece to be placed.
	{
	Column column;
	column.PlaceToken('X');
	}
	bool Update()
		{
				ActiveToken = 'X';
				switch (ActiveToken)
				{
				default:ActiveToken = 'O';
					break;
				}
				Cell m_Cell;
				Column column;
				ConnectFour Grid;
				column.isFull();
				column.PlaceToken('X');
				Grid.PlacePiece(1);


		}
	bool CheckVictory()
	{
	Cell m_Cell; Column Cols;
	Cols.isFull();
	m_Cell==m_Cell;

	}
};

int main()
{
	ConnectFour Grid;


}
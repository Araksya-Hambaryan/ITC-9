#include<iostream>
void printLab( const char lab[][ 12 ], int xLoc, int yLoc)
{
   // nested for loops to iterate through labyrinth
   for ( int x = 0; x < 12; ++x ) 
   {
      for ( int y = 0; y < 12; ++y ) {
		  if ((x == xLoc) && (y == yLoc)) {
			  std::cout << 'X' << ' ';
	       	} else {
			  std::cout << lab[ x ][ y ] << ' ';
			}
	}
      std::cout << '\n';
   } 

   std::cout << "\n See next move - just click enter\n";
   std::cin.get();
}
// 0 is ^, 1 is > , 2 is down, 3 is <
int labTraverse(char lab[][12], int xLoc, int yLoc, int dir)
{
	int success = 0;

	lab[xLoc][yLoc] = '*';   

	printLab(lab, xLoc, yLoc);	
	
	while (success == 0 )
	{
		if ((xLoc == 4) && (yLoc == 11))
		{
			success = 1;	
		}
		else if (dir == 0)	
		{
			if (lab[xLoc][yLoc+1] == '.')	//check square to the right for valid move
			{
				success = labTraverse(lab, xLoc, yLoc+1, 1);	// Move to the right
			}
			else if (lab[xLoc-1][yLoc] == '.')	//check square above for valid move
			{
				success = labTraverse(lab, xLoc-1, yLoc, 0);	// Move up
			}
			else if (lab[xLoc][yLoc-1] == '.')	//check square to the left for valid move
			{
				success = labTraverse(lab, xLoc, yLoc-1, 3);	// Move to the left
			}
			else {	
				return 0;	
			}
		}
		else if (dir == 1)	// If facing right
		{
			if (lab[xLoc+1][yLoc] == '.')	//check square below for valid move
			{
				success = labTraverse(lab, xLoc+1, yLoc, 2);	// Move down
			}
			else if (lab[xLoc][yLoc+1] == '.')	//check square to the right for valid move
			{
				success = labTraverse(lab, xLoc, yLoc+1, 1);	// Move right
			}
			else if (lab[xLoc-1][yLoc] == '.')	//check square above for valid move
			{
				success = labTraverse(lab, xLoc-1, yLoc, 0);	// Move up
			}
			else {
				return 0;
			}
		}
		else if (dir == 2)	// If facing down
		{
			if (lab[xLoc][yLoc-1] == '.')	// check square to the left for valid move
			{
				success = labTraverse(lab, xLoc, yLoc-1, 3);	// Move to the left
			}
			else if (lab[xLoc+1][yLoc] == '.')	//check square below for valid move
			{
				success = labTraverse(lab, xLoc+1, yLoc, 2);	// Move down
			}
			else if (lab[xLoc][yLoc+1] == '.')	// check square to the right for valid move
			{
				success = labTraverse(lab, xLoc, yLoc+1, 1);	// Move to the right
			}
			else {
				return 0;	
			}
		}
		else if (dir == 3)	// If facing left
		{
			if (lab[xLoc-1][yLoc] == '.')	// check square above for valid move
			{
				success = labTraverse(lab, xLoc-1, yLoc, 0);	// Move up
			}
			else if (lab[xLoc][yLoc-1] == '.')	// check square to the left for valid move
			{
				success = labTraverse(lab, xLoc, yLoc-1, 3);	// Move to the left
			}
			else if (lab[xLoc+1][yLoc] == '.')	// check square below for valid move
			{
				success = labTraverse(lab, xLoc+1, yLoc, 2);	// Move down
			}
			else {
				return 0;
			}
		}
	}
return success;
}

int main()
{
	char lab[ 12 ][ 12 ] =
      { {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
      {  '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
      {  '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
      {  '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
      {  '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
      {  '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
      {  '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
      {  '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
      {  '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
      {  '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
      {  '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
      {  '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'} };
	int success = 0;

	success = labTraverse(lab, 2, 0, 1);	// Call function to move through the labyrinth, assign returned value to success

	if (success == 1) {
		std::cout << "Congratulations! The labyrinth  has been solved\n";	
	} else {	
		std::cout << "Unfortunately the labyrinth has not been solved correctly\n";	
	}

	return 0; 
}

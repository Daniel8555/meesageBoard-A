#include <iostream>
#include "Direction.hpp"
#include <string>
using std::string;
using namespace std;

namespace ariel {
//     class Board; 
// }
 class Board{
	public:
	// Board();
  
 	void post(unsigned int row, unsigned int column, Direction direction, std::string message);
	string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);	
	void show();
     
    };
}


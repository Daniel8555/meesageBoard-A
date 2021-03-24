

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;
#include "doctest.h"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;
// ariel::Board board;
TEST_CASE("Good code")
{
Board board;
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="______");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="ddddd");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="abcde");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="werty");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="hello");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/6)=="byebye");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="ccccc");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="eerre");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/3)=="ddd");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/2)=="dr");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/2)=="ed");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/2)=="ab");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/3)=="abc");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/1)=="d");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/4)=="ddde");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/4)=="ddde");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/4)=="dded");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/4)=="dedd");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="deewd");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="deedd");
CHECK(board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/5)=="dddes");


   
}

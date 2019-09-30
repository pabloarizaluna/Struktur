#define CATCH_CONFIG_MAIN
#include "Catch2/catch.hpp"

#include "Node.h"

TEST_CASE( "Node creation", "[Node]") 
{
  Node< int > int_node(0);
  REQUIRE( int_node.datum() == 0 );

  int_node.datum(-10);
  REQUIRE( int_node.datum() == -10 );
}
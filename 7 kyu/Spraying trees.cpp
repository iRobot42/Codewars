#include <fmt/format.h>
std::string task( std::string d, int n, int c ) {
  return fmt::format( "It is {} today, {}, you have to work, you must spray {} trees and you need {} dollars to buy liquid",
    d, std::array{ "James", "John", "Robert", "Michael", "William" }[ std::string( "ouehr" ).find( d[ 1 ] )], n, c * n );
}

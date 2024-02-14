#include <fmt/format.h>
std::string chromosomeCheck( std::string sperm ) {
  return fmt::format( "Congratulations! You're going to have a {}.",
    sperm.back() == 'Y' ? "son" : "daughter" );
}

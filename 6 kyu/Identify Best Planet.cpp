#include <unordered_set>

static const std::unordered_set< std::string > // O(1) search
  required_elements{ "H", "C", "N", "O", "P", "Ca" };

std::string bestPlanet( const std::vector< std::string >& solar_system,
                        int max_size ) {

  std::string best_planet;
  int closest_size{};

  for ( const auto& planet : solar_system ) {

    int size{};
    size_t essential_elements_count{};

    for ( const auto& c : planet ) {

      std::string element;

      if ( const auto h{ *std::next( &c ) }; isupper( c ))
        element = islower( h ) ? std::string{ c, h } : std::string{ c };
      else if ( isdigit( c ))
        size = size * 10 + c-'0';

      if ( required_elements.find( element ) != required_elements.cend() )
        ++essential_elements_count;
    }

    if ( essential_elements_count == required_elements.size()
         && size <= max_size && size > closest_size )
      best_planet = planet, closest_size = size;
  }

  return best_planet;
}

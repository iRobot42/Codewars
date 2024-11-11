#include <range/v3/numeric/accumulate.hpp>
using Names_t = std::vector< std::string >;
Names_t nBestStudents( Names_t students, std::vector< std::vector< float >> grades, int n ) {
  std::map< float, std::string > avg;
  for ( size_t i{}; i < students.size(); ++i )
    avg[ ranges::accumulate( grades[ i ], 0. ) / grades[ i ].size() ] = students[ i ];
  Names_t best; best.reserve( n );
  for ( auto it{ avg.crbegin() }; n--; ++it ) best.push_back(( *it ).second );
  return best;
}

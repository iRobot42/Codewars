#include <set>
using Memory_t = std::array< unsigned, 16 >;
unsigned mem_alloc( const Memory_t& banks ) {
  Memory_t state{ banks };
  std::set< Memory_t > states;
  unsigned cycles{};
  do { ++cycles;
    auto i_bank{ std::max_element( state.begin(), state.end() ) - state.begin() };
    auto blocks{ state[ i_bank ] };
    state[ i_bank ] = 0u;
    while ( blocks-- ) ++state[ ++i_bank % 16 ];
  } while ( states.insert( state ).second );
  return cycles;
}

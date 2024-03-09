using Exhibits_t = std::vector< unsigned int >;
Exhibits_t removeSmallest( const Exhibits_t& ratings ) {
  if ( ratings.size() < 2 ) return {};
  Exhibits_t result{ ratings };
  result.erase( min_element( result.begin(), result.end() ));
  return result;
}

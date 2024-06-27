#include <set>
std::string major_scale( const std::string& melody ) {
  const std::unordered_map< std::string, std::set< char >> major_scales{
    { "C",  { 'C','D','E','F','G','A','B' }}, { "C#", { 'c','d','F','f','g','a','C' }},
    { "D",  { 'D','E','f','G','A','B','c' }}, { "D#", { 'd','F','G','g','a','C','D' }},
    { "E",  { 'E','f','g','A','B','c','d' }}, { "F",  { 'F','G','A','a','C','D','E' }},
    { "F#", { 'f','g','a','B','c','d','F' }}, { "G",  { 'G','A','B','C','D','E','f' }},
    { "G#", { 'g','a','C','c','d','F','G' }}, { "A",  { 'A','B','c','D','E','f','g' }},
    { "A#", { 'a','C','D','d','F','G','A' }}, { "B",  { 'B','c','d','E','f','g','a' }}};
  std::set< char > notes;
  for ( size_t i{}; i < melody.size(); ++i )
    if ( melody[ i+1 ] != '#' ) notes.insert( melody[ i ] );
    else notes.insert( tolower( melody[ i++ ] ));
  for ( const auto& [ key, scale ] : major_scales )
    if ( scale == notes ) return key + " major scale";
  return "No major scale";
}

#include <cmath>
#include <range/v3/algorithm/find.hpp>
double FrequencyOfNote( const std::string& note ) {
  const std::string s[]{ "C","C#","D","D#","E","F","F#","G","G#","A","A#","B" };
  const int n{ note[ 1 ] == '#' ? 2 : 1 };
  return 440 * pow( 2, ( ranges::find( s, note.substr( 0, n )) - s - 9 ) / 12.
                       + stoi( note.substr( n )) - 4 );
}

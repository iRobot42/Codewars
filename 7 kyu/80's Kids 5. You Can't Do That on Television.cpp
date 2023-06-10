#include <regex>
using namespace std;
class EightiesKids5 {
public:
  static string bucketOf( const string& said ) {
    bool w{ regex_search( said, regex( "water|wet|wash", regex::icase ) ) };
    return regex_search( said, regex( "i don't know|slime", regex::icase ) ) ?
      w ? "sludge" : "slime" : w ? "water" : "air";
  }
};

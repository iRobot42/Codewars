#include <fnmatch.h>
bool solve( std::string a, std::string b ) {
  return !fnmatch( a.data(), b.data(), FNM_NOESCAPE );
}

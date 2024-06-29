#include <fmt/format.h>
class VersionManager {
  struct V { int a, b, c; };
  std::stack< V > h;
public:
  VersionManager( std::string_view = "0.0.1" );
  VersionManager& major();
  VersionManager& minor();
  VersionManager& patch();
  VersionManager& rollback();
  std::string release() const;
};
VersionManager::VersionManager( std::string_view version ) {
  std::string v[ 3 ]{}; int i{};
  if ( version.empty() ) v[ 2 ] = "1";
  for ( const char c : version )
    if ( isdigit( c )) v[ i ] += c;
    else if ( c == '.' ) { if ( ++i > 2 ) break; }
    else throw VersionException( "Error occured while parsing version!" );
  for ( auto& n : v ) if ( n.empty() ) n = "0";
  h.push({ stoi( v[ 0 ] ), stoi( v[ 1 ] ), stoi( v[ 2 ] ) });
}
VersionManager& VersionManager::major() {
  h.push({ h.top().a + 1, 0, 0 });
  return *this;
}
VersionManager& VersionManager::minor() {
  h.push({ h.top().a, h.top().b + 1, 0 });
  return *this;
}
VersionManager& VersionManager::patch() {
  h.push({ h.top().a, h.top().b, h.top().c + 1 });
  return *this;
}
VersionManager& VersionManager::rollback() {
  if ( h.size() < 2 ) throw VersionException( "Cannot rollback!" );
  return h.pop(), *this;
}
std::string VersionManager::release() const {
  return fmt::format( "{}.{}.{}", h.top().a, h.top().b, h.top().c );
}

#include <cmath>
std::vector<double> fcfs( const std::vector< std::pair< int, int >>& p ) {
  int tct{}, ttt{}, twt{}, tbt{};
  for ( int ct{}; const auto& [ at, bt ] : p )
    ct = fmax( ct, at ) /* process got CPU */, tbt += bt, twt += ct - at,
    ct += bt /* process execution complete */, tct += ct, ttt += ct - at;
  auto out{ [ & ]( double d ){ return ceil( d / p.size() * 100 ) / 100; }};
  return { out( tct ), out( ttt ), out( twt ), out( tbt ) };
}

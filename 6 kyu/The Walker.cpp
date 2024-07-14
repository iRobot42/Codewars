#include <cmath>
namespace Walker {
  std::vector<int> solve( int OA, int AB, int BC, int tOA, int hAB, int uBC ) {
    const double DR{ M_PI / 180 }, TOA{ tOA * DR }, HAB{ hAB * DR }, UBC{ uBC * DR },
      XC{ OA * cos( TOA ) - AB * sin( HAB ) - BC * cos( UBC ) },
      YC{ OA * sin( TOA ) + AB * cos( HAB ) - BC * sin( UBC ) },
      OC{ hypot( XC, YC ) }, tOC{ acos( XC / OC ) / DR };
    return { int( round( OC )), int( tOC ), int( tOC * 60 ) % 60, int( tOC * 3600 ) % 60 };
  }
}

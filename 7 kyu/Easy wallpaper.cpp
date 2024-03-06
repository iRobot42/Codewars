#include <cmath>
using namespace std;
struct Wallpaper {
  static string wallPaper( double l, double w, double h ) {
    return array{ "zero", "one", "two", "three", "four", "five", "six", "seven",
           "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
           "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty" }
           [ l && w && h ? ceil( 0.4423 * h * ( l + w )) : 0 ];
  }
};

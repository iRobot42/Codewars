#include <cmath>
double triangle_perimeter( const Triangle& t ) {
  return hypot( t.a.x - t.b.x, t.a.y - t.b.y )
       + hypot( t.b.x - t.c.x, t.b.y - t.c.y )
       + hypot( t.c.x - t.a.x, t.c.y - t.a.y );
}

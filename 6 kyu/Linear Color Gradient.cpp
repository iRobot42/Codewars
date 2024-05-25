using color_t = std::array< double, 3 >;
using color_pos_t = std::pair< color_t, double >;
using colors_pos_t = std::vector< color_pos_t >;
using gradient_f = std::function< color_t( double )>;

constexpr double LBOUND{ 0 }, RBOUND{ 1 };
constexpr color_t DEFAULT_COLOR{ 0, 0, 0 };
enum { iR, iG, iB };

gradient_f create_gradient( const colors_pos_t& colors ) {
  return [ = ]( const double pos_n ) -> color_t {
    if ( colors.empty() ) return DEFAULT_COLOR;

    color_t col_l{ DEFAULT_COLOR };  double pos_l{ LBOUND - 1 };
    color_t col_r{ DEFAULT_COLOR };  double pos_r{ RBOUND + 1 };

    for ( const auto& [ col_i, pos_i ] : colors )
           if ( pos_i >= pos_l && pos_i <= pos_n ) col_l = col_i, pos_l = pos_i;
      else if ( pos_i <= pos_r && pos_i >= pos_n ) col_r = col_i, pos_r = pos_i;

    const double POS_COEF{ ( pos_n - pos_l ) / ( pos_r - pos_l ) };

    return pos_l < LBOUND ? col_r : pos_r > RBOUND ? col_l : color_t {
      col_l[ iR ] + ( col_r[ iR ] - col_l[ iR ] ) * POS_COEF,
      col_l[ iG ] + ( col_r[ iG ] - col_l[ iG ] ) * POS_COEF,
      col_l[ iB ] + ( col_r[ iB ] - col_l[ iB ] ) * POS_COEF };
  };
}

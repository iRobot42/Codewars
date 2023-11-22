vector< int > printIntersection( int a1[], int a2[], int n, int m ) {
    vector< int > v;
    set_intersection( a1, unique( a1, a1 + n ),
                      a2, unique( a2, a2 + m ),
                      back_inserter( v ));
    return v.empty() ? vector< int >{ -1 } : v;
}

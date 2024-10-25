class CoffeeBuilder {
  Coffee coffee;
public:
  CoffeeBuilder() = default;
  CoffeeBuilder set_black_coffee() {
    return coffee.sort = "Black", *this;
  }
  CoffeeBuilder set_cubano_coffee() {
    return coffee.sort = "Cubano", ( *this ).with_sugar( "Brown" );
  }
  CoffeeBuilder set_antoccino_coffee() {
    return coffee.sort = "Americano", ( *this ).with_milk( 0.5 );
  }
  CoffeeBuilder with_milk( float fat ) {
    return coffee.milk.push_back({ fat }), *this;
  }
  CoffeeBuilder with_sugar( const std::string& sort ) {
    return coffee.sugar.push_back({ sort }), *this;
  }
  Coffee build() { return coffee; }
};

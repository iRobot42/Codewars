class GooseToIDuckAdapter : IDuck {
  Goose* g;
public:
  GooseToIDuckAdapter( Goose* goose ){ g = goose; }
  std::string Quack() override { return g->Honk(); }
  void Fly() override { g->Fly(); }
};

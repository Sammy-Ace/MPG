class S : public Space {
public:
  S(void) {}
  S(bool share, S& s) : Space(share,s) {}
  virtual Space* copy(bool share) { return new S(share,*this); }
};

int
main(int argc, char* argv[]) {
  S s;
  LI li(s,4);
  std::cout << li.get() << std::endl;
  li.set(5);
  std::cout << li.get() << std::endl;
  return 0;
}

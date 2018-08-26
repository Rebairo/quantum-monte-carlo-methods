#ifndef Node_h
#define Node_h

class Node {
 public:
  Node();
  Node(char* _id, int _spin, double _value);
  void flip();

  char* id;
  int spin;
  double value;
};
#endif
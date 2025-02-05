// class templates
#include <iostream>
using namespace std;

template <class T>
class mypair {
    T a, b;
  public:
    mypair (T first, T second)
      {a=first; b=second;}
    T getmax ();
};

template <class T>
T mypair<T>::getmax ()
{
  T retval;
  retval = a>b? a : b;
  return retval;
}
//In case that a member function is defined outside the defintion of the class template, it shall be preceded with the template <...> prefix
int main () {
  mypair <int> myobject (100, 75);
  cout << myobject.getmax()<<endl;
  return 0;
}

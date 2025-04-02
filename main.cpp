#include <iostream> 

using namespace std;

template <typename DataType>
class GenericArray{
private:
DataType val;

public:
value(){}
value(DataType n_v) { val = n_v;}

void addElement(DataType n_v) {val = n_v;}

DataType at() {return val;}

DataType size() {}


};









int main()
{
  GenericArray<int> int_array;
  int_array.addElement(10);
  /// more code between here
    //
    //
    //
  //cout << "size of array is " << int_array.size() << endl;
 // cout << "sum of the array is " << int_array.sum() << endl;
  //cout << "maximum and minimum of array is " << int_array.max() << "\t" << int_array.min() << endl;
  //int *sliced_array = int_array.slice(5,10);
  // print sliced_array...
  return 0;
}




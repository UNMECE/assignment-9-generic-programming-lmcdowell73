#include <iostream> 

using namespace std;

template <typename Type>
class GenericArray{
private:
Type *array;
int array_size;
public:


void addElement(Type element){array = element;}

Type at() {return val;}

Type size() {}


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




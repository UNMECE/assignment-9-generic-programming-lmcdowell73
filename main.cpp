#include <iostream> 

using namespace std;

template <typename Type>
class GenericArray{
private:
Type *array;
int currentsize;
public:

GenericArray() {
  array = nullptr;
  int currentsize = 0;
}

~GenericArray(){
delete[] array;
}

void addElement(Type element){
  Type *newElement = new Type[currentsize + 1];
  for(int i = 0; i < currentsize; ++i){
    newElement[i] = array[i];
  }
  newElement[currentsize] = element;
  delete[] array;
  array = newElement;
  ++currentsize;
}

Type at(int index){
  return array[index];
} 

Type size() const{
  return currentsize;
}

Type sum()const{
  Type total = Type();
  for(int i =0;i < currentsize; ++i){
    total += array[i];
  }
  return total;
}

Type max()const{
  Type maxElement = array[0];
  for(int i = 1; i < size; ++i){
    if(array[i] > maxElement){
      maxElement = array[i];
    }
  }
  return maxElement;
}

Type min() const{
  Type minElement = array[0];
  for(int i = 1; i < currentsize; ++i){
    if(array[i] > minElement){
      minElement = array[i];
    }
  }
  return minElement;
}

Type slice(int begin, int end)const{
  int newSize = end - begin + 1;
  Type newArray = new Type[newSize];
  for(int i=0; i < newSize; ++i){
    newArray[i] = array[begin + i];
  }
  return newArray;
}

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




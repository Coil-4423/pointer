This is helpful to understand the concept of pointer

### Code:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";        // Declare a string variable and initialize it with "Pizza"
  string* ptr = &food;          // Declare a pointer to a string and assign it the address of 'food'
  string* ptr_1 = ptr;          // Declare another pointer to a string and assign it the same address as 'ptr'

  cout << ptr_1 << "\n";        // Print the memory address stored in 'ptr_1'
  cout << *ptr_1 << "\n";       // Print the value stored at the address pointed to by 'ptr_1'
  cout << food << "\n";         // Print the value of 'food'
  cout << ptr <<  "\n";         // Print the memory address stored in 'ptr'
  cout << &food << "\n";        // Print the address of 'food'
  cout << *ptr << "\n";         // Print the value stored at the address pointed to by 'ptr'
  cout << &ptr << "\n";         // Print the address of the pointer 'ptr' itself
  return 0;
}
```

### Explanation and Output:

1. **`string food = "Pizza";`**:
   - **Action**: Initializes a `string` variable `food` with the value `"Pizza"`.

2. **`string* ptr = &food;`**:
   - **Action**: Declares a pointer `ptr` that points to the address of `food`.

3. **`string* ptr_1 = ptr;`**:
   - **Action**: Declares another pointer `ptr_1` that is assigned the same address as `ptr`. This means `ptr_1` and `ptr` now both point to the same memory location where `food` is stored.

4. **`cout << ptr_1 << "\n";`**:
   - **Action**: Prints the memory address stored in `ptr_1`.
   - **Output**: The memory address of `food`, something like `0x7ffee3a6b8b0` (the actual address may vary).

5. **`cout << *ptr_1 << "\n";`**:
   - **Action**: Prints the value stored at the memory address `ptr_1` points to.
   - **Output**: `Pizza`, which is the value of `food`.

6. **`cout << food << "\n";`**:
   - **Action**: Prints the value of `food`.
   - **Output**: `Pizza`.

7. **`cout << ptr << "\n";`**:
   - **Action**: Prints the memory address stored in `ptr`.
   - **Output**: The same memory address as `ptr_1`, something like `0x7ffee3a6b8b0`.

8. **`cout << &food << "\n";`**:
   - **Action**: Prints the address of `food`.
   - **Output**: The same memory address as `ptr` and `ptr_1`, something like `0x7ffee3a6b8b0`.

9. **`cout << *ptr << "\n";`**:
   - **Action**: Prints the value stored at the memory address `ptr` points to.
   - **Output**: `Pizza`.

10. **`cout << &ptr << "\n";`**:
    - **Action**: Prints the memory address where the pointer `ptr` itself is stored.
    - **Output**: A different memory address, something like `0x7ffee3a6b8b8` (the actual address may vary).

### Summary:
- **Pointers `ptr` and `ptr_1`**: Both point to the same memory address where `food` is stored.
- **Dereferencing (`*ptr` and `*ptr_1`)**: Accesses the value `"Pizza"` stored at the address pointed to by these pointers.
- **Memory Addresses**: `ptr`, `ptr_1`, and `&food` all reference the same address, but `&ptr` gives the address of the `ptr` pointer itself, which is different.

This code demonstrates the concept of pointers pointing to the same memory location and how to access both the value and address information using pointers in C++.

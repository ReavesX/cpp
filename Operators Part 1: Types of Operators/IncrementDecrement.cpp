
/*


You are given a code with initialization of count. (Don't delete this line!)

Your task is to add the following operations, in this order:

Use the increment operator (++) four times to add 4 to count
Use the multiplication operator (*) to multiply count by 2
Use the decrement operator (--) once to subtract 1 from count



*/

#include <iostream>

int main() {
    int count = 0;
    
    // Type your code below
    
    for(int i = 0; i < 4; i++){
        count++;
    }

    count = count * 2;

    count--;
    
    // Don\'t change the line below
    std::cout << "count = " << count;
    return 0;
}
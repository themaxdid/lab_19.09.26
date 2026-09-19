
#include <iostream>
#include <limits>

// переменная - названный участок памяти
// целые знаковые и беззнаковые, вещественные, символьные, логические
// на примере char: у знаковой переменной 1 бит используется для
// обозначения знака, используется 7 бит для значения

int main() {

    std::cout << "тип" << "\t" << "\t"
              << "значение" << "\t"
              << "размер_в_байтах" << "\t"
              << "мин" << "\t" << "\t" << "\t"
              << "макс" << std::endl;


    char example_char = 'a';
    std::cout << "char" << "\t" << "\t"
              << example_char << "\t" << "\t"
              << sizeof(example_char) << "\t" << "\t" << std::endl;

    short example_short = 12;
    std::cout << "short" << "\t" << "\t"
              << example_short << "\t" << "\t"
              << sizeof(example_short) << "\t" << "\t"
              << std::numeric_limits<short>::min() << "\t" << "\t" << "\t" 
              << std::numeric_limits<short>::max() << std::endl;

    int example_int = 123;
    std::cout << "int" << "\t" << "\t"
              << example_int << "\t" << "\t"
              << sizeof(example_int) << "\t" << "\t"
              << std::numeric_limits<int>::min() << "\t" << "\t" 
              << std::numeric_limits<int>::max() << std::endl;
    
    long long example_long_long = 1234;
    std::cout << "long_long" << "\t" 
              << example_long_long << "\t" << "\t"
              << sizeof(example_long_long) << "\t" << "\t"
              << std::numeric_limits<long long>::min() << "\t" 
              << std::numeric_limits<long long>::max() << std::endl;
    
    unsigned int example_uint = 12345;
    std::cout << "unsigned int" << "\t" 
              << example_uint << "\t" << "\t"
              << sizeof(example_uint) << "\t" << "\t"
              << std::numeric_limits<unsigned int>::min() << "\t" << "\t" << "\t" 
              << std::numeric_limits<unsigned int>::max() << std::endl;

    float example_float = 1.2f;
    std::cout << "float" << "\t" << "\t"
              << example_float << "\t" << "\t"
              << sizeof(example_float) << "\t" << "\t"
              << std::numeric_limits<float>::lowest() << "\t" << "\t" 
              << std::numeric_limits<float>::max() << std::endl;

    double example_double = 1.23;
    std::cout << "double" << "\t" << "\t"
              << example_double << "\t" << "\t"
              << sizeof(example_double) << "\t" << "\t"
              << std::numeric_limits<double>::lowest() << "\t" << "\t" 
              << std::numeric_limits<double>::max() << std::endl;
    
    bool example_bool = 1;
    std::cout << "bool" << "\t" << "\t"
              << example_bool << "\t" << "\t"
              << sizeof(example_bool) << "\t" << "\t"
              << "0" << "\t" << "\t" << "\t" 
              << "1" << std::endl;
              
}
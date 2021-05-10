#include <iostream>
#include <vector>
#include <string>

using namespace std;

// void double_data(int *);

// void double_data(int *int_ptr)
// {
//     *int_ptr *= 2;
// }

// int main()
// {
// int num{10};
// cout << "Value of the num is: " << num << endl;
// cout << "Size of the num is: " << sizeof num << endl;
// cout << "Address of the num is: " << &num << endl;

// int *p;

// cout << "\nValue of p is: " << p << endl;
// cout << "Address of p is: " << &p << endl;
// cout << "sizeof p is: " << sizeof p << endl;

// p = nullptr;

// cout << "Value of p is: " << p << endl;

// int *p1{nullptr};
// double *p2{nullptr};
// unsigned long long *p3{nullptr};
// vector<string> *p4{nullptr};
// string *p5{nullptr};

// cout << "\nsize of p1: " << sizeof p1 << endl;
// cout << "sizeof p2: " << sizeof p2 << endl;
// cout << "sizeof p3: " << sizeof p3 << endl;
// cout << "sizeof p4: " << sizeof p4 << endl;
// cout << "sizeof p5: " << sizeof p5 << endl;

// int score{10};
// double high_temp{100.7};

// int *score_ptr{nullptr};

// score_ptr = &score;
// cout << "Value of score is: " << score << endl;
// cout << "Address of score is: " << &score << endl;
// cout << "Value of score_ptr is: " << score_ptr << endl;

//Dynamic memory allocation......................

// int *int_ptr{nullptr};
// int_ptr = new int;
// cout << int_ptr << endl;
// delete int_ptr;

// size_t size{0};
// double *temp_ptr{nullptr};

// cout << "How many temps? ";
// cin >> size;

// temp_ptr = new double[size];

// cout << temp_ptr << endl;

// delete[] temp_ptr;

//Arrays and pointers..........................

// int scores[]{100, 95, 89};

// cout << "Value of scores: " << scores << endl;

// int *score_ptr{scores};
// cout << "Value of score_ptr: " << score_ptr << endl;

// cout << "\nArray subscript notation------------------------" << endl;
// cout << scores[0] << endl;
// cout << scores[1] << endl;
// cout << scores[2] << endl;

// cout << "\nPointer subscript notation------------------------" << endl;
// cout << score_ptr[0] << endl;
// cout << score_ptr[1] << endl;
// cout << score_ptr[2] << endl;

// cout << "\nPointer offset notation------------------------------" << endl;
// cout << *score_ptr << endl;
// cout << *(score_ptr + 1) << endl;
// cout << *(score_ptr + 2) << endl;

// cout << "\nArray offset notation-------------------------------" << endl;
// cout << *scores << endl;
// cout << *(scores + 1) << endl;
// cout << *(scores + 2) << endl;

//Pointer Arithematic....................................

// int scores[]{100, 95, 89, 68, -1};
// int *score_ptr{scores};

// while (*score_ptr != -1)
// {
//     cout << *score_ptr << endl;
//     score_ptr++;
// }

// cout << "\n-------------------------------------" << endl;
// score_ptr = scores;
// while (*score_ptr != -1)
//     cout << *score_ptr++ << endl;

// cout << "\n----------------------------------------" << endl;
// string s1{"Frank"};
// string s2{"Frank"};
// string s3{"James"};

// string *p1{&s1};
// string *p2{&s2};
// string *p3{&s1};

// cout << boolalpha;
// cout << p1 << "==" << p2 << ":" << (p1 == p2) << endl;
// cout << p1 << "==" << p3 << ":" << (p1 == p3) << endl;

// cout << *p1 << "==" << *p2 << ":" << (*p1 == *p2) << endl;
// cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl;

// p3 = &s3;
// cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl;

// cout << "\n----------------------------" << endl;

// char name[]{"Frank"};

// char *char_ptr1{nullptr};
// char *char_ptr2{nullptr};

// char_ptr1 = &name[0];
// char_ptr2 = &name[3];

// cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

// cout << endl;

//PointerToPointers.....................................

//     int value{10};
//     int *int_ptr{nullptr};

//     cout << "Value: " << value << endl;
//     double_data(&value);
//     cout << "Value: " << value << endl;

//     cout << "-----------------------------" << endl;
//     int_ptr = &value;
//     double_data(int_ptr);
//     cout << "Value: " << value << endl;

//     cout << endl;

//     return 0;
// }

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x{100}, y{200};
//     cout << "\nx: " << x << endl;
//     cout << "y: " << y << endl;

//     swap(&x, &y);

//     cout << "\nx: " << x << endl;
//     cout << "y: " << y << endl;

//     cout << endl;

//     return 0;
// }

// void display(vector<string> *v)
// {
//     (*v).at(0) = "Frank";
//     for (auto str : *v)
//         cout << str << " ";
//     cout << endl;
// }

// void display(int *array, int sentinel)
// {
//     while (*array != sentinel)
//     {
//         cout << *array++ << endl;
//     }
// }

// int main()
// {

//     // cout << "------------------------------------" << endl;
//     // vector<string> stooges{"Larry", "Moe", "Curly"};
//     // display(&stooges);

//     cout << "\n-----------------------------------" << endl;
//     int scores[]{100, 98, 97, 79, 85, -1};
//     display(scores, -1);

//     cout << endl;
//     return 0;
// }

// int *create_array(size_t size, int init_value = 0)
// {
//     int *new_storage{nullptr};
//     new_storage = new int[size];
//     for (size_t i{0}; i < size; ++i)
//     {
//         *(new_storage + i) = init_value;
//     }
//     return new_storage;
// // }

// // void display(const int *const array, size_t size)
// // {
// //     for (size_t i{0}; i < size; ++i)
// //     {
// //         cout << array[i] << " ";
// //     }
// //     cout << endl;
// // }

// // int main()
// // {
// //     int *my_array{nullptr};
// //     size_t size;
// //     int init_value{};

// //     cout << "\nHow many integers would you like to allocate?";
// //     cin >> size;
// //     cout << "What value would you like them initialized to?";
// //     cin >> init_value;

// //     my_array = create_array(size, init_value);
// //     cout << "\n--------------------------------------" << endl;

// //     display(my_array, size);
// //     delete[] my_array;
// //     return 0;
// // }

// //Refrences.............................

// int main()
// {

//     int num{100};
//     int &ref{num};

//     cout << num << endl;
//     cout << ref << endl;

//     num = 200;
//     cout << "\n--------------------------------" << endl;
//     cout << num << endl;
//     cout << ref << endl;

//     ref = 300;
//     cout << "\n-----------------------------------" << endl;
//     cout << num << endl;
//     cout << ref << endl;

//     cout << "\n-----------------------------------" << endl;

//     vector<string> stooges{"Larry", "Moe", "Curly"};

//     for (auto str : stooges)
//     {
//         str == "Funny";
//     }
//     for (auto str : stooges)
//     {
//         cout << str << endl;
//     }

//     cout << "\n---------------------------" << endl;

//     for (auto &str : stooges)
//     {
//         str == "Funny";
//     }

//     for (auto const &str : stooges)
//     {
//         cout << str << endl;
//     }

//     cout << endl;

//     return 0;
// }

int *apply_all(int array_1[], int array_2[], int size1, int size2)
{
    int size_add{0};
    int *new_array{nullptr};
    int size_new_array = size1 * size2;
    new_array = new int[size_new_array];
    for (int i{0}; i < size1; ++i)
    {
        for (int j{0}; j < size2; ++j)
        {

            *(new_array + size_add) = array_1[i] * array_2[j];
            ++size_add;
        }
    }
    return new_array;
}

void print(const int *const array_ptr[], int size)
{
    cout << "[";
    for (int i{0}; i < size; ++i)
    {
        cout << array_ptr[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int main()
{
    int array_1[]{1, 2, 3, 4, 5};
    int array_2[]{10, 20, 30};

    cout << "Array 1:";
    print(array_1, 5);

    cout << "Array 2:";
    print(array_2, 3);

    int *results = apply_all(array_1, array_2, 5, 3);
    cout << "Result: ";
    print(results, 15);
    return 0;
}
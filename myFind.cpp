#include<iostream>

template<typename Iter, typename T>
Iter myFind(Iter firstIter, Iter lastIter, const T& value)
{
    while (firstIter != lastIter)
    {
        if (*firstIter == value)
            return firstIter;
        firstIter++;
    }
}

template<typename T>
void display(T* arg_1, T* arg_2)
{
    if (arg_1 != arg_2)
    {
        std::cout << "value is found : " << *arg_1 << '\n' << '\n';
    }
    else
    {
        std::cout << "value isn't found !!!\n";
        std::cout << "adress of &array[9] :" << arg_2 << '\n';
        std::cout << "iter                :" << arg_1 << '\n' << '\n';
    }
}

int main()
{
    int array[] = { 1,2,3,4,5,6,7,8,9 };
    std::string sarray[]{ "Rainer","Magdalena","Diter","Alex" };

    int* iter_int_1 = myFind(array, &array[9], 8);
    int* iter_int_2 = myFind(array, &array[9], 21);

    std::string* iter_string_1 = myFind(sarray, &sarray[4], "Alex");
    std::string* iter_string_2 = myFind(sarray, &sarray[4], "Kerstin");

    display(iter_int_1, &array[9]);
    display(iter_int_2, &array[9]);

    display(iter_string_1, &sarray[4]);
    display(iter_string_2, &sarray[4]);

    return 0;
}
#include <iostream>

void deleteElement(int arr[], int &size, int index)
{
    if (index < 0 || index >= size)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    for (int i = index; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }

    --size;
    std::cout << "Element deleted successfully" << std::endl;
}

int main()
{
    const int maxSize = 100; // Maximum size of the array
    int array[maxSize] = {10, 20, 30, 40, 50};
    int size = 5; // Current size of the array

    std::cout << "Original array:";
    for (int i = 0; i < size; ++i)
    {
        std::cout << " " << array[i];
    }
    std::cout << std::endl;

    int position;
    std::cout << "Enter the index of the element to delete: ";
    std::cin >> position;

    deleteElement(array, size, position);

    std::cout << "Array after deletion:";
    for (int i = 0; i < size; ++i)
    {
        std::cout << " " << array[i];
    }
    std::cout << std::endl;

    return 0;
}

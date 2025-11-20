#include <bits/stdc++.h>
using namespace std;

/*
==========================
   NOTES ON std::tuple
==========================

1. Definition:
   std::tuple<T1, T2, ...> is a fixed-size container that can hold multiple values of different types.

2. Header:
   Declared in <tuple> (also included by <bits/stdc++.h>).

3. Initialization:
   - Using make_tuple():
       auto t = make_tuple("Alice", 42, "123456789");
   - Using brace initialization:
       tuple<string, int, string> t = {"Alice", 42, "123456789"};

4. Accessing Elements:
   - Using std::get<index>(tuple):
       cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);
   - Structured binding (C++17+):
       auto [name, age, phone] = t;

5. Comparison:
   Tuples support ==, <, >, etc. Comparison is lexicographical across all elements.

6. Use Cases:
   - Returning multiple values from a function.
   - Grouping heterogeneous data without creating a struct.
   - Useful in algorithms like sort with multiple keys.

7. Best Practices:
   - For readability, prefer structured bindings.
   - For named fields, consider struct or class instead of tuple.
   - Use std::tie for unpacking or ignoring elements.

8. Performance:
   - Lightweight, no dynamic allocation.
   - Copying a tuple copies all elements.

==========================
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Example 1: Initialization and access
    tuple<string, int, string> student1 = make_tuple("helen", 10, "01242242342");
    cout << get<0>(student1) << " " << get<1>(student1) << " " << get<2>(student1) << endl;

    // Example 2: Structured binding
    tuple<string, int, string> student2 = {"jelen", 10, "2341234124"};
    auto [name, roll, phone] = student2;
    cout << name << " " << roll << " " << phone << endl;

    // Example 3: Taking input for multiple tuples
    int n;
    cin >> n;
    tuple<string, int, string> students[n];

    for (int i = 0; i < n; i++)
    {
        string name, phone;
        int roll;
        cin >> name >> roll >> phone;
        students[i] = {name, roll, phone};
    }

    for (auto [name, roll, phone] : students)
    {
        cout << "name: " << name << ", roll: " << roll << ", phone: " << phone << endl;
    }

    return 0;
}
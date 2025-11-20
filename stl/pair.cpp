#include <bits/stdc++.h>
using namespace std;

/*
==========================
   NOTES ON std::pair
==========================

1. Definition:
   std::pair<T1, T2> is a container that holds two values (first, second) of possibly different types.

2. Header:
   Declared in <utility> (also included by <bits/stdc++.h>).

3. Initialization:
   - Using make_pair():
       auto p = make_pair("Alice", 42);
   - Using brace initialization:
       pair<string, int> p = {"Alice", 42};

4. Accessing Elements:
   - Direct:
       p.first, p.second
   - Structured binding (C++17+):
       auto [name, roll] = p;

5. Comparison:
   Supports ==, <, >, etc. Comparison is lexicographical:
   First compare 'first'; if equal, compare 'second'.

6. Use Cases:
   - Returning two values from a function.
   - Storing key-value pairs (often used in maps).
   - Temporary grouping of two related values.

7. Best Practices:
   - For more than two values, use std::tuple or a struct.
   - Prefer auto with make_pair for cleaner code.
   - Use structured bindings for readability (C++17+).

8. Performance:
   - Lightweight, no dynamic allocation.
   - Copying a pair copies both elements.

==========================
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ===============================
    // Basic usage of std::pair
    // ===============================

    // Create a pair using make_pair
    pair<string, int> student1 = make_pair("helen", 43);

    // Create a pair using brace initialization
    pair<string, int> student2 = {"helen", 20};

    // Access elements directly
    cout << student1.first << " " << student1.second << endl;

    // Structured binding (C++17+)
    auto [name, roll] = student2;
    cout << name << " " << roll << endl;

    int n;
    cin >> n;
    pair<string, int> students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    for (auto [name, roll] : students)
    {
        cout << "name: " << name << ", roll: " << roll << endl;
    }

    return 0;
}
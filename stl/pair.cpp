#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // // pair<string, int>  student = make_pair("helen", 43);
    // pair<string, int> student = {"helen", 20};

    // // cout << student.first << " " << student.second << endl;

    // auto [name, roll] = student;
    // cout << name << " " << roll << endl;

    int n;
    cin >> n;
    pair<string, int> students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    for (auto [name, roll] : students)
    {
        cout << "name: " << name << ", " << "roll: " << roll << endl;
    }

    return 0;
}
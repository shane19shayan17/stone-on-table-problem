#include <iostream>

using namespace std;

int remove_number(string colors, int stone_number)
{
    int removing = 0;

    char last_index = colors[0];
    for (int i = 1; i < stone_number; i++)
    {
        if (colors[i] == last_index)
        {
            removing++;
        }
        last_index = colors[i];
    }
    return removing;
}

int main()
{
    int stone_number;
    cin >> stone_number;
    cin.ignore();

    string colors;
    getline(cin, colors);

    int removing = remove_number(colors, stone_number);
    cout << removing << endl;

    return 0;
}
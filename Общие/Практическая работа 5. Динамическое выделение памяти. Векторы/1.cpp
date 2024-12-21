#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;

    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    int max_numb = a[0];
    for (int i = 0; i < a.size(); i++) {
        if (max_numb < a[i]) {
            max_numb = a[i];
        }
    }
    cout << "max_numb: " << max_numb << endl;
    return 0;
}

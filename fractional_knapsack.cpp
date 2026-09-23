```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Item {
    int weight;
    int value;
    double ratio;
    int number;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);

    cout << "Enter weight and value of each item:\n";

    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].value;

        items[i].ratio = (double)items[i].value / items[i].weight;
        items[i].number = i + 1;
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    sort(items.begin(), items.end(), compare);

    cout << "\nItems sorted by value/weight ratio:\n";

    for (int i = 0; i < n; i++) {
        cout << "Item " << items[i].number
             << " - Weight: " << items[i].weight
             << ", Value: " << items[i].value
             << ", Ratio: " << fixed << setprecision(2)
             << items[i].ratio << endl;
    }

    double totalValue = 0.0;
    int remainingCapacity = capacity;

    cout << "\nSelected Items:\n";

    for (int i = 0; i < n; i++) {

        if (remainingCapacity == 0)
            break;

        if (items[i].weight <= remainingCapacity) {

            totalValue += items[i].value;
            remainingCapacity -= items[i].weight;

            cout << "Item " << items[i].number
                 << " - 100% selected" << endl;
        }
        else {

            double fraction =
                (double)remainingCapacity / items[i].weight;

            totalValue += items[i].value * fraction;

            cout << "Item " << items[i].number
                 << " - " << fixed << setprecision(2)
                 << fraction * 100 << "% selected" << endl;

            remainingCapacity = 0;
        }
    }

    cout << "\nTotal Weight: "
         << capacity - remainingCapacity << endl;

    cout << "Maximum Value: "
         << fixed << setprecision(2)
         << totalValue << endl;

    return 0;
}
```

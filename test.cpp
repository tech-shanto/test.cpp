#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};
Node *createLinkedList()
{
    int value;
    cin >> value;
    if (value == -1)
        return nullptr;
    Node *head = new Node(value);
    Node *current = head;

    while (cin >> value && value != -1)
    {
        Node *newNode = new Node(value);
        current->next = newNode;
        current = newNode;
    }
    return head;
}
int findMaxMinDifference(Node *head)
{
    if (!head)
        return 0;

    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    Node *current = head;
    while (current)
    {
        maxVal = max(maxVal, current->data);
        minVal = min(minVal, current->data);
        current = current->next;
    }
    return maxVal - minVal;
}
int main()
{
    Node *head = createLinkedList();
    cout << findMaxMinDifference(head) << endl;
    return 0;
}
#include <iostream>
using namespace std;

class Channel
{
    int subscribers;
    int views;

public:

    // Default constructor
    Channel()
    {
        subscribers = 1000;
        views = 2000;
    }

    // Parameterized constructor
    Channel(int s, int v)
    {
        subscribers = s;
        views = v;
    }

    // Overloading + operator
    Channel operator+(const Channel &obj)
    {
        Channel result;
        result.subscribers = subscribers + obj.subscribers;
        result.views = views + obj.views;

        return result;
    }

    void showData()
    {
        cout << "Subscribers: " << subscribers << endl;
        cout << "Views: " << views << endl;
    }
};

int main()
{
    Channel channel1(1500, 3000);
    Channel channel2(700, 1800);

    Channel total = channel1 + channel2;

    cout << "Channel 1:" << endl;
    channel1.showData();

    cout << "\nChannel 2:" << endl;
    channel2.showData();

    cout << "\nCombined Channel:" << endl;
    total.showData();

    Channel defaultChannel;

    cout << "\nDefault Channel:" << endl;
    defaultChannel.showData();

    return 0;
}
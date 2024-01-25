#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 8, 10};
    vector<int> v1 = {1, 3, 5, 7, 9};
    // cout << v.size() << endl; //size=0
    // cout << v.capacity() << endl;//capacity=0
    // v.resize(20);
    // cout << v.size() << endl;     // size=20
    // cout << v.capacity() << endl; // capacity =20
    // v.push_back(11);
    // v.insert(v.begin() + 3, 7);
    // int ele, count = 0;
    // for (int ele : v)
    // {
    //     if (ele == 0)
    //     {
    //         count++;
    //     }
    // }
    // cout << "Total zeros = " << count << endl;
    // cout << "size= " << v.size() << endl; // size =22
    // cout << v.capacity() << endl;         // capacity=40
    // v.pop_back();
    // v.erase(v.end() - 17);
    // cout << "size= " << v.size() << endl; // size =20
    // cout << v.capacity() << endl;         // capacity=40
    // cout << v.empty();                    // check if vector is empty
    // v.assign({1, 2, 3, 4});               // assign new value to vector
    // cout << v.at(3); // return 8 (value at index)
    // cout << v.max_size();
    // v.shrink_to_fit();// request to reduce capacity, match the size
    // cout << "size= " << v.size() << endl; // size =22
    // cout << v.capacity() << endl; // capacity=22
    // v.swap(v1);
    // cout << "v = <";
    // for (int ele : v)
    // {
    //     cout << ele << ",";
    // }
    // cout << ">" << endl;
    // cout << "v1 = <";
    // for (int elem : v1)
    // {
    //     cout << elem << ",";
    // }
    // cout << ">" << endl;
    // v.clear();
    // vector<int> v2;
    // int ele;
    // do
    // {
    //     cin >> ele;
    //     v2.push_back(ele);
    // } while (ele != 0);
    // for (int ele : v2)
    // {
    //     cout << ele << ",";
    // }
    // cout << v.front();// return first element
    // cout << v[3]; //return elemnt at index 3
    // cout << v.back();// return last index
    return 0;
}

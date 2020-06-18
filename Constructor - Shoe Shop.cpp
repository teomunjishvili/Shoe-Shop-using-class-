#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ShoeShop
{
        int size;
        string style;
        bool is_male;
    public:
        ShoeShop(int a, string b, bool c)
        {
            size = a;
            style = b;
            is_male = c;
        }

        void set_values(int a, string b, bool c)
        {
            size = a;
            style = b;
            is_male = c;
        }

        bool get_is_male()
        {
            return is_male;
        }

        void get_values ()
        {
            cout<<"Shoe Size: "<<size<<endl;
            cout<<"Style: "<<style<<endl;
            cout<<"Are you looking for a man or a woman? "<<is_male<<endl;
        }
};

int main()
{
    vector<ShoeShop> shoes ();
    ShoeShop obj1(36, "Sports", true);
    obj1.get_values ();
    return 0;
}

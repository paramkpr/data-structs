#include <iostream>

struct v3 {
    double x, y, z;
};


v3 sum(v3 const &a, v3 const &b) {
    v3 v;
    v.x = a.x + b.x;
    v.y = a.y + b.y;
    v.z = a.z + b.z;
    return v;
}

/* write scale and length functions */


/* member functions */ 

struct vector3 {
    double x, y, z;

    vector3 sum(vector3 const &b) {
        vector3 v;
        v.x = x + b.x;
        v.y = y + b.y;
        v.z = z + b.z;
        return v;
    }
};

v3 a = {2, 3, 6};
v3 b = {4, 5, 6};
v3 s = sum(a, b);

vector3 a1 = {2, 3, 6};
vector3 b1 = {4, 5, 6};
vector3 s1 = a1.sum(b1);


int main() {
    std::cout << "The sum is: (" << s.x << ", " << s.y << ", " << s.z << ")" << std::endl;
    std::cout << "The sum is: (" << s1.x << ", " << s1.y << ", " << s1.z << ")" << std::endl;
    return 0;
}


#include <iostream> 
#include <cmath>

class V3 {
    private: 
        double rho, phi, z;
    public:
        double getX() {return (rho * cos(phi));}
        double getY() {return (rho * sin(phi));}
        double getZ() {return z;}
        void setXYZ(double vx, double vy, double vz) {
            rho = sqrt(vx*vx + vy*vy);
            phi = atan(vy/vx);
            z = vz;
            return;
        }
};

int main() {
    return 0;
}
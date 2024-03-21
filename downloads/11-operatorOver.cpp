#include <iostream>
using namespace std;

class ComplexNum {
    private:
        int real, imag;
    public:
        ComplexNum(int r = 0, int i = 0){
            real = r;
            imag = i;
        }    

        ComplexNum operator+ (ComplexNum const& obj){
            ComplexNum res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print() {
            cout << real << " + i"<< imag << endl;
        }
};

int main() {

    ComplexNum c1(10, 5), c2(2, 4);

    ComplexNum c3 = c1 + c2;
    c3.print();

    return 0;
}

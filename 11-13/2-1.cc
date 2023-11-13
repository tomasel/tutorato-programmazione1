
#include <iostream> 
#include <string>

using namespace std;


struct Obj {
    float mass;
    float velocity;
}; 

void handleCollision(Obj * a, Obj * b){

    float vaf = -b->mass * b->velocity / a->mass;
    float vbf = -a->mass * a->velocity / b->mass;
    // set new velocities
    a->velocity = vaf;
    b->velocity = vbf;
}


int main() {

    Obj a, b;

    a.mass = 2;
    a.velocity = 0;

    b.mass = 2;
    b.velocity = 8;

    cout << a.mass << ", " << a.velocity << endl;
    cout << b.mass << ", " << b.velocity << endl;

    handleCollision(&a, &b);

    cout << a.mass << ", " << a.velocity << endl;
    cout << b.mass << ", " << b.velocity << endl;

    return 0;

}
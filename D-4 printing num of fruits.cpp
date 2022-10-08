#include
#include
#include
using namespace std;

class Mangoes{
public:
int nMango;
Mangoes(){
cout<<"No. of mangoes"< cin>>nMango;
}
};

class Apples{
public:
int nApple;
Apples(){
cout<<"No. of apples"< cin>>nApple;
}
};

class Fruit : public Mangoes, Apples{
public:
int nFruits;
void cal_no_of_fruit(){
nFruits = nMango+nApple;
}
void display(){
cout<<"No. of fruit are "< }
};

int main(){
Fruit f;
f.cal_no_of_fruit();
f.display();
return 0;
}


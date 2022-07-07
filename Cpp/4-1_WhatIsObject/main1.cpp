#include <iostream>

class Animal{
    private:
        int food;
        int weight;
    
    public:
        void set_animal(int _food, int _weight){
            food = _food;
            weight = _weight;
        }
        
        void increase_food(int inc){
            food += inc;
            weight += (inc/3);
        }

        void view_stat(){
            std::cout << "Food of this animal : " << food << std::endl;
            std::cout << "Weight of this animal : " << weight << std::endl;
        }
};

int main(){
    Animal animal;

    // animal.wegiht = 100; is impossible
    // weight is private variable

    animal.set_animal(100, 50);
    animal.view_stat();

    animal.increase_food(30);
    animal.view_stat();

    return 0;
}
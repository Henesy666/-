#include <iostream>
struct box
{
    char maker[40];
    float height;
    float weight;
    float length;
    float volume;
};
void Show_box(struct box t);
void volume_box(box *t);
int main()
{
    box Cube = {"Cube", 5, 4, 10, 0};
    volume_box(&Cube);
    Show_box(Cube);
    return 0;
}
void volume_box(box *t)
{
    t->volume = t->weight * t->height * t->length;

}
void Show_box(box t)
{
    using namespace std;
    cout << "height: " << t.height << endl
         << "weight: " << t.weight << endl
         << "length: " << t.length << endl
         << "volume: " << t.volume;
}
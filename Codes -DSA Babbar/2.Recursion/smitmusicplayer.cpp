#include<iostream>
#include<string>
using namespace std;

struct node
{
    /* data */
};
 node
{
char data;
// constructor 
node()
{


}

};
void insert()
{


}
void delete_element()
{

}
void display()
{

}
void next_node()
{

}
void prev_node()
{

}
void play_first()
{

}
void play_last()
{

}
void play_specific()
{

}

int main ()
{
    int choice;
    cout<<" press: 1.to insert"<<endl<< "2.to delete"<<endl<<"3.to show playlist"<<endl<<"4.to play next"<<endl<<"5.to play prev"<<endl<<"6.to play first file"<<endl<<"7.to play last file"<<endl<<"8.to play specific file"<<endl<<"9.to exit"<<endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            insert();
        case 2:
            delete_element();
        case 3:
            display();
        case 4:
            next_node();
        case 5:
            prev_node();
        case 6:
            play_first();

        case 7:
            play_last();
        case 8:
            play_specific();
        case 9:
            exit ;
    }
}

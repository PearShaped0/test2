#include <iostream>

using namespace std;
char answers [5];

void test(){
    string quest[] = {"What kind of food would you choose?\n a)steak\n b)vegetable salad\n c)fried potato",
                      "If you were a chair, what would it be?\n a)modern and stylish\n b)soft and comfortable\n c)I wasn't a chair!",
                      "How do you relax?\n a)getting drink in a bar\n b)with a book\n c)having fun with friends",
                      "How would you dress for a party?\n a)bright and expensive\n b)convinient and pleasant\n c)so that I'm the center of attention!",
                      "Which comics character is closer to you?\n a)Iron Man\n b)Spiderman\n c)Joker"
    };
    char c;
    for(int i = 0; i < sizeof(answers); i++){
        cout << quest[i] << endl;
        scanf("%s", &c);
        answers[i] = c;
    }
    
}

void result(string name){
    char a = 'a', b = 'b', c = 'c';
    int co_a, co_b, co_c;
    
    for (int i = 0; i < sizeof(answers); i++){
        if (answers[i] == a){
            co_a++;
        }else if (answers[i] == b){
            co_b++;
        }else if (answers[i] == c){
            co_c++;
        } else {
            cout << "error";
        }
    }
    
        int max = co_a>co_b?co_a:co_b;
        max = co_c >max?co_c:max;

        if (max == co_a){
            cout << name << ", you are Rottweiler!" << endl;
        } else if (max == co_b){
            cout << name << ", you are Corgi" << endl;
        } else if (max == co_c){
            cout << name << ", you are Husky" << endl;
        } else {
            cout << name << ", you are cat, sorry" << endl;
        }
    
}


int main(){
    string name;
    cout << "Hello! This is a test of what kind of dog you are." << endl;
    cout << "Write your name" << endl;
    cin >> name;
    test();
    result(name);
    return 0;
}

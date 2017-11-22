#include <iostream>
#include <vector>

using namespace std;

class ATM{

private:
    string admin_password = "admin123";
public:
    //bool valid_atm_password(unsigned int inputPass){
      //  return (inputPass == admin_password ? true : false);
    string get_atm_admin(){
        return admin_password;
    }
};

class user_data{

    public:
        //inicializalo lista, a this-> parancsot helyettesiti
        user_data(string name, unsigned int pincode, float money): name(name), pincode(pincode), money(money){}

        float get_money(){
            return money;
        }
        string get_name(){
            return name;
        }
        unsigned int get_pincode(){
            return pincode;
        }

    private:

        string name;
        int pincode;
        float money;

};

class users{

private:
    vector<user_data> UserList;
public:
    //setter & vektor feltoltes
    void addUser(user_data ud){
    //user_data tempUD;
    //tempUD.name = name;
    UserList.push_back(ud);
    }

    unsigned int get_user_pin(unsigned int index){
        return UserList.at(index).get_pincode();
    }

    unsigned int get_user_count(){
        return UserList.size();
    }

    void print_richest(){

        int i = 0;
        float max_money = 0;
        unsigned int max_index = 0;

        for(i = 0; i < UserList.size();i++)
        {
            if(UserList.at(i).get_money() < max_money)
            {
                max_money = UserList.at(i).get_money();
                max_index = i;
            }
        }
        cout << "The richest person is " << UserList.at(max_index).get_name();
    }
};

class costumers: public users{

};

class administrator: public users{

};

void MainScreen();
int ValidateInput(string input_pass);
int ValidateInput(unsigned int input_pass);

int main()
{
    user_data u1("Adam", 1111, 9999);
    user_data u2("Zoli", 1234, 9000);
    user_data u3("Geri", 2222, 1000);

    users usr;
    usr.addUser(u1);
    usr.addUser(u2);
    usr.addUser(u3);

   usr.print_richest();

   ATM Bankatm;

    return 0;
}

void MainScreen(){
    unsigned int input_pin = 0;

    cout << "Welcome to our atm machine!" << endl;
    cout << "---------------------------" << endl;
    cout << "Please input your pin code " << endl;
    cin >> input_pin;

    ValidateInput(input_pin);
    //if(Bankatm.valid_atm_password(input_pin) == true){
      //  cout << "" //attettuk oket a 2 overloadosba
}

//check if it is an admin password
int ValidateInput(string input_pass){
    if(input_pass == Bankatm.get_atm_admin()){
        return 1000;    //admin logged in
    }
    return -1;    //false password
}

//check if it is a user password
int ValidateInput(unsigned int input_pass){
    int i = 0;
    for(i = 0; i < usr.get_user_count; i++){
        if(input_pass == usr.get_user_pin(i)){
            return i;
        }
    }
}

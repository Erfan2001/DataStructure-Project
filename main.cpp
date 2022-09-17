#include <iostream>
#include <string>
#include <map>
#include <list>
#include <fstream>
#define sep cout << "--------------------------" <
#include <stdlib.h>
#include<cstdlib>
using namespace std;

class node_person
{
private:
    string first_name, last_name, city, work, ssn, key, birthday;

public:
    string get_ssn()
    {
        return ssn;
    }
    void set_ssn(string d)
    {
        this->ssn = d;
    }
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = ssn;
        return;
    }
    string get_first_name()
    {

        return first_name;
    }
    void set_first_name(string a)
    {
        first_name = a;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_last_name(string a)
    {
        last_name = a;
    }
    string get_city()
    {
        return city;
    }
    void set_city(string a)
    {
        city = a;
    }
    string get_work()
    {
        return work;
    }
    void set_work(string a)
    {
        work = a;
    }
    string get_birthday()
    {
        return birthday;
    }
    void set_birthday(string a)
    {
        birthday = a;
    }
    void arr(int n, string a)
    {
        if (n == 0)
        {
            first_name = a;
        }
        else if (n == 1)
            last_name = a;
        else if (n == 2)
        {
            ssn = a;
        }
        else if (n == 3)
        {
            birthday = a;
        }
        else if (n == 4)
        {
            city = a;
        }
        else if (n == 5)
            work = a;
        set_key();
    }
};

class node_bank_account
{
private:
    string ssn, bank_name, iban, account_id, key;

public:
    void set_key()
    {
        this->key = iban;
    }
    string get_key()
    {
        return key;
    }
    void set_ssn(string a)
    {
        ssn = a;
    }
    string get_ssn()
    {
        return ssn;
    }
    string get_bank_name()
    {
        return bank_name;
    }
    void set_bank_name(string a)
    {
        bank_name = a;
    }
    string get_IBAN()
    {
        return iban;
    }
    void set_iban(string a)
    {
        iban = a;
    }
    string get_account_id()
    {
        return account_id;
    }
    void set_account_id(string a)
    {
        account_id = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            ssn = a;
        }
        else if (n == 1)
            bank_name = a;
        else if (n == 2)
        {
            iban = a;
        }
        else if (n == 3)
        {
            account_id = a;
        }

        set_key();
    }
};

class node_house
{
private:
    string key, ssn, price, postal_code, size, address;

public:
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = postal_code;
    }
    string get_ssn()
    {
        return ssn;
    }
    void set_ssn(string a)
    {
        ssn = a;
    }
    string get_price()
    {
        return price;
    }
    void set_price(string a)
    {
        price = a;
    }
    string get_postal_code()
    {
        return postal_code;
    }
    void set_postal_code(string a)
    {
        postal_code = a;
    }
    string get_size()
    {
        return size;
    }
    void set_size(string a)
    {
        size = a;
    }
    string get_address()
    {
        return address;
    }
    void set_address(string a)
    {
        address = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            ssn = a;
        }
        else if (n == 1)
            price = a;
        else if (n == 2)
        {
            postal_code = a;
        }
        else if (n == 3)
        {
            size = a;
        }
        else if (n == 4)
        {
            address = a;
        }

        set_key();
    }
};

class node_car
{
private:
    string key, ssn, model, color, plate;

public:
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = plate;
    }
    string get_color()
    {
        return color;
    }
    void set_color(string a)
    {
        color = a;
    }
    string get_ssn()
    {
        return ssn;
    }
    void set_ssn(string a)
    {
        ssn = a;
    }
    string get_model()
    {
        return model;
    }
    void set_model(string a)
    {
        model = a;
    }
    string get_plate()
    {
        return plate;
    }
    void set_plate(string a)
    {
        plate = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            plate = a;
        }
        else if (n == 1)
            ssn = a;
        else if (n == 2)
        {
            model = a;
        }
        else if (n == 3)
        {
            color = a;
        }

        set_key();
    }
};

class node_phone_number
{
private:
    string key, ssn, number, operatorphone;

public:
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = number;
    }
    string get_ssn()
    {
        return ssn;
    }
    void set_ssn(string a)
    {
        ssn = a;
    }
    string get_number()
    {
        return number;
    }
    void set_number(string a)
    {
        number = a;
    }
    string get_operatorphone()
    {
        return operatorphone;
    }
    void set_operatorphone(string a)
    {
        operatorphone = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            ssn = a;
        }
        else if (n == 1)
            number = a;
        else if (n == 2)
        {
            operatorphone = a;
        }

        set_key();
    }
};

//ownership jar dare
class edge_ownership
{
private:
    string owner_ship_id, date, amount, key, from, to;
    node_person *pre;
    node_car *next_car;
    node_house *next_house;

public:
    edge_ownership()
    {
    }
    string get_to()
    {
        return to;
    }
    string get_from()
    {
        return from;
    }
    void set_from(string a)
    {
        from = a;
    }
    void set_to(string a)
    {
        to = a;
    }
    node_person *get_pre()
    {
        return pre;
    }
    void set_pre(node_person *d)
    {
        pre = d;
    }

    node_car *get_next_car()
    {
        if (next_car != nullptr)
            return next_car;
        else
        {
            return nullptr;
        }
    }
    node_house *get_next_house()
    {
        return next_house;
    }
    void set_next(node_car *d)
    {
        next_car = d;
        next_house = nullptr;
    }
    void set_next(node_house *d)
    {
        next_house = d;
        next_car = nullptr;
    }
    string get_owner_ship_id()
    {
        return owner_ship_id;
    }
    void set_owner_ship_id(string d)
    {
        owner_ship_id = d;
    }
    string grt_date()
    {
        return date;
    }
    void set_date(string d)
    {
        date = d;
    }
    string get_amount()
    {
        return amount;
    }
    void set_amount(string d)
    {
        amount = d;
    }
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = owner_ship_id;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            from = a;
        }
        else if (n == 1)
            to = a;
        else if (n == 2)
        {
            owner_ship_id = a;
        }
        else if (n == 3)
        {
            date = a;
        }
        else if (n == 4)
        {
            amount = a;
        }

        set_key();
    }
};

class edge_call
{
private:
    string key, call_id, date, duration, from, to;
    node_phone_number *pre, *next;

public:
    string get_to()
    {
        return to;
    }
    string get_from()
    {
        return from;
    }
    void set_from(string a)
    {
        from = a;
    }
    void set_to(string a)
    {
        to = a;
    }
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = call_id;
    }
    string get_call_id()
    {
        return call_id;
    }
    void set_call_id(string d)
    {
        call_id = d;
    }
    string get_date()
    {
        return date;
    }
    void set_date(string d)
    {
        date = d;
    }
    string get_duration()
    {
        return duration;
    }
    void set_duration(string a)
    {
        duration = a;
    }
    node_phone_number *get_pre()
    {
        return pre;
    }
    void set_pre(node_phone_number *a)
    {
        pre = a;
    }
    node_phone_number *get_next()
    {
        return next;
    }
    void set_next(node_phone_number *a)
    {
        next = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            from = a;
        }
        else if (n == 1)
            to = a;
        else if (n == 2)
        {
            call_id = a;
        }
        else if (n == 3)
        {
            date = a;
        }
        else if (n == 4)
        {
            duration = a;
        }

        set_key();
    }
};

class edge_transaction
{
private:
    string key, transaction_id, date, amount, from, to;
    node_bank_account *pre, *next;

public:
    string get_to()
    {
        return to;
    }
    string get_from()
    {
        return from;
    }
    void set_from(string a)
    {
        from = a;
    }
    void set_to(string a)
    {
        to = a;
    }
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = transaction_id;
    }
    string get_transaction_id()
    {
        return transaction_id;
    }
    void st_transaction_id(string a)
    {
        transaction_id = a;
    }
    string get_date()
    {
        return date;
    }
    void set_date(string a)
    {
        date = a;
    }
    string get_amount()
    {
        return amount;
    }
    void set_amount(string a)
    {
        amount = a;
    }
    node_bank_account *get_pre()
    {
        return pre;
    }
    node_bank_account *get_next()
    {
        return next;
    }
    void set_pre(node_bank_account *a)
    {
        pre = a;
    }
    void set_next(node_bank_account *a)
    {
        next = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            from = a;
        }
        else if (n == 1)
            to = a;
        else if (n == 2)
        {
            transaction_id = a;
        }
        else if (n == 3)
        {
            date = a;
        }
        else if (n == 4)
        {
            amount = a;
        }

        set_key();
    }
};

class edge_relationship
{
private:
    string key, date, relation, from, to;
    node_person *pre, *next;

public:
    string get_to()
    {
        return to;
    }
    string get_from()
    {
        return from;
    }
    void set_from(string a)
    {
        from = a;
    }
    void set_to(string a)
    {
        to = a;
    }
    string get_key()
    {
        return key;
    }
    void set_key()
    {
        key = from + " " + to;
    }
    string get_date()
    {
        return date;
    }
    void set_date(string a)
    {
        date = a;
    }
    string get_relation()
    {
        return relation;
    }
    void set_relation(string a)
    {
        relation = a;
    }
    node_person *get_pre()
    {
        return pre;
    }
    node_person *get_next()
    {
        return next;
    }
    void set_pre(node_person *s)
    {
        pre = s;
    }
    void set_next(node_person *a)
    {
        next = a;
    }

    void arr(int n, string a)
    {
        if (n == 0)
        {
            from = a;
        }
        else if (n == 1)
            to = a;
        else if (n == 2)
        {
            relation = a;
        }
        else if (n == 3)
        {
            date = a;
        }

        set_key();
    }
};

class graph
{
    //movaghat
    friend int main();
    //movaghat
private:
    list<node_car> car;
    list<node_house> house;
    list<node_person> person;
    list<node_bank_account> bank_acount;
    list<node_phone_number> phone_number;
    list<edge_call> call;
    list<edge_ownership> ownership;
    list<edge_transaction> transaction;
    list<edge_relationship> relationship;
    list<node_person> criminals;
    list<node_person> smuggler;
    list<node_person> suspects;

public:
    //ok
    void init_node_person()
    {
        string a, b;
        cout << "please enter address of person node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);

        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            node_person s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            person.push_front(s);
        }
        read.close();
    }
    //ok
    void init_node_house()
    {
        string a, b;
        cout << "please enter address of house node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            node_house s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            house.push_front(s);
        }
        read.close();
    }
    //ok
    void init_node_car()
    {
        string a, b;
        cout << "please enter address of car node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            node_car s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            car.push_front(s);
        }
        read.close();
    }

    //ok
    void init_node_bank_acount()
    {
        string a, b;
        cout << "please enter address of bank_acount node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            node_bank_account s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            bank_acount.push_front(s);
        }
        read.close();
    }
    //ok
    void init_node_phone_number()
    {
        string a, b;
        cout << "please enter address of phone_number node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            node_phone_number s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            phone_number.push_front(s);
        }
        read.close();
    }
    //ok shod
    void init_edge_call()
    {
        string a, b;
        cout << "please enter address of call node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            edge_call s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            call.push_front(s);
        }
        read.close();
    }
    //ok
    void init_edge_ownership()
    {
        string a, b;
        cout << "please enter address of ownership node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            edge_ownership s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            ownership.push_front(s);
        }
        read.close();
    }
    //ok
    void init_edge_transaction()
    {
        string a, b;
        cout << "please enter address of transaction node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            edge_transaction s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            transaction.push_front(s);
        }
        read.close();
    }
    //ok
    void init_edge_relationship()
    {
        string a, b;
        cout << "please enter address of relationship node data file :" << endl;
        cin >> a;
        ifstream read;
        read.open(a);
        getline(read, a);
        bool flag;
        int m;
        while (getline(read, a))
        {
            flag = true;
            edge_relationship s;
            b = "";
            m = 0;
            for (int i = 0; i < a.size(); ++i)
            {
                if (flag == false && a[i] != '"')
                {
                    b += a[i];
                }
                if (a[i] == '"')
                {
                    if (flag == true)
                        flag = false;
                    else
                    {
                        flag = true;
                        s.arr(m, b);
                        b = "";
                    }
                }
                if (a[i] == ',')
                    ++m;
            }
            relationship.push_front(s);
        }
        read.close();
    }

    void conection()
    {
        bool f1, f2;
        for (list<edge_relationship>::iterator it = relationship.begin(); it != relationship.end(); ++it)
        {
            f1 = f2 = true;
            for (list<node_person>::iterator i = person.begin(); i != person.end(); ++i)
            {
                if (f1 == false && f2 == false)
                    break;
                if (it->get_from() == i->get_ssn())
                {
                    f1 = false;
                    it->set_pre(&(*i));
                }
                if (it->get_to() == i->get_ssn())
                {
                    f2 = false;
                    it->set_next(&(*i));
                }
            }
        }

        for (list<edge_call>::iterator it = call.begin(); it != call.end(); ++it)
        {
            f1 = f2 = true;
            for (list<node_phone_number>::iterator i = phone_number.begin(); i != phone_number.end(); ++i)
            {
                if (f1 == false && f2 == false)
                    break;
                if (it->get_from() == i->get_number())
                {
                    f1 = false;
                    it->set_pre(&(*i));
                }
                if (it->get_to() == i->get_number())
                {
                    f2 = false;
                    it->set_next(&(*i));
                }
            }
        }

        for (list<edge_ownership>::iterator it = ownership.begin(); it != ownership.end(); ++it)
        {
            f1 = f2 = true;
            for (list<node_person>::iterator i = person.begin(); i != person.end(); ++i)
            {
                if (it->get_from() == i->get_ssn())
                {
                    f1 = false;
                    it->set_pre(&(*i));
                    break;
                }
            }
            for (list<node_car>::iterator i = car.begin(); i != car.end(); ++i)
            {
                if (it->get_to() == i->get_plate())
                {
                    f2 = false;
                    it->set_next(&(*i));
                    break;
                }
            }
            if (f2 == true)
            {
                for (list<node_house>::iterator i = house.begin(); i != house.end(); ++i)
                {
                    if (it->get_to() == i->get_postal_code())
                    {
                        f2 = false;
                        it->set_next(&(*i));
                        break;
                    }
                }
            }
        }

        for (list<edge_transaction>::iterator it = transaction.begin(); it != transaction.end(); ++it)
        {
            f1 = f2 = true;
            for (list<node_bank_account>::iterator i = bank_acount.begin(); i != bank_acount.end(); ++i)
            {
                if (f1 == false && f2 == false)
                    break;
                if (it->get_from() == i->get_account_id())
                {
                    f1 = false;
                    it->set_pre(&(*i));
                }
                if (it->get_to() == i->get_account_id())
                {
                    f2 = false;
                    it->set_next(&(*i));
                }
            }
        }
    }

    void phas_1()
    {
        string w_li;
        cout << "whitch file do you want to see ?" << endl;
        cin >> w_li;
        if (w_li == "car")
        {
            ofstream phase1("car.txt");
            phase1 << "plat "
                   << "ssn "
                   << "model "
                   << "color " << endl;
            for (auto it = car.begin(); it != car.end(); it++)
            {
                phase1 << it->get_plate() << "  ";
                phase1 << it->get_ssn() << "  ";
                phase1 << it->get_model() << "  ";
                phase1 << it->get_color() << "\n";
            }
            phase1.close();
        }
        if (w_li == "house")
        {
            ofstream phase1("house.txt");
            phase1 << "ssn "
                   << "price "
                   << "postal_code "
                   << "size "
                   << "address" << endl;
            for (auto it = house.begin(); it != house.end(); it++)
            {
                phase1 << it->get_ssn() << "  ";
                phase1 << it->get_price() << "  ";
                phase1 << it->get_postal_code() << "  ";
                phase1 << it->get_size() << "  ";
                phase1 << it->get_address() << "\n";
            }
            phase1.close();
        }
        if (w_li == "person")
        {
            ofstream phase1("person.txt");
            phase1 << "first_name "
                   << "last_name "
                   << "ssn "
                   << "birthday "
                   << "city "
                   << "work" << endl;
            for (auto it = person.begin(); it != person.end(); it++)
            {
                phase1 << it->get_first_name() << "  ";
                phase1 << it->get_last_name() << "  ";
                phase1 << it->get_ssn() << "  ";
                phase1 << it->get_birthday() << "  ";
                phase1 << it->get_city() << "  ";
                phase1 << it->get_work() << "\n";
            }
            phase1.close();
        }
        if (w_li == "bank_acount")
        {
            ofstream phase1("bank_acount.txt");
            phase1 << "ssn "
                   << "bank_name "
                   << "iban "
                   << "account_id" << endl;
            for (auto it = bank_acount.begin(); it != bank_acount.end(); it++)
            {
                phase1 << it->get_ssn() << "  ";
                phase1 << it->get_bank_name() << "  ";
                phase1 << it->get_IBAN() << "  ";
                phase1 << it->get_account_id() << endl;
            }
            phase1.close();
        }
        if (w_li == "phone_number")
        {
            ofstream phase1("phone_number.txt");
            phase1 << "ssn "
                   << "number "
                   << "operator" << endl;
            for (auto it = phone_number.begin(); it != phone_number.end(); it++)
            {
                phase1 << it->get_ssn() << "  ";
                phase1 << it->get_number() << "  ";
                phase1 << it->get_operatorphone() << endl;
            }
            phase1.close();
        }
        if (w_li == "call")
        {
            ofstream phase1("call.txt");
            phase1 << "feom "
                   << "to "
                   << "call_id "
                   << "date "
                   << "duration" << endl;
            for (auto it = call.begin(); it != call.end(); it++)
            {
                phase1 << it->get_from() << "  ";
                phase1 << it->get_to() << "  ";
                phase1 << it->get_call_id() << "  ";
                phase1 << it->get_date() << "  ";
                phase1 << it->get_duration() << endl;
            }
            phase1.close();
        }
        if (w_li == "relationship")
        {
            ofstream phase1("relationship.txt");
            phase1 << "from "
                   << "to "
                   << "relation "
                   << "date" << endl;
            for (auto it = relationship.begin(); it != relationship.end(); it++)
            {
                phase1 << it->get_from() << "  ";
                phase1 << it->get_to() << "  ";
                phase1 << it->get_relation() << "  ";
                phase1 << it->get_date() << endl;
            }
            phase1.close();
        }
        if (w_li == "ownership")
        {
            ofstream phase1("ownership.txt");
            phase1 << "from "
                   << "to "
                   << "ownership "
                   << "amount" << endl;
            for (auto it = ownership.begin(); it != ownership.end(); it++)
            {
                phase1 << it->get_from() << "  ";
                phase1 << it->get_to() << "  ";
                phase1 << it->get_owner_ship_id() << "  ";
                phase1 << it->get_amount() << endl;
            }
            phase1.close();
        }
        if (w_li == "transaction")
        {
            ofstream phase1("transaction.txt");
            phase1 << "from "
                   << "to "
                   << "transaction_id "
                   << "date "
                   << "amount" << endl;
            for (auto it = transaction.begin(); it != transaction.end(); it++)
            {
                phase1 << it->get_from() << "  ";
                phase1 << it->get_to() << "  ";
                phase1 << it->get_transaction_id() << "  ";
                phase1 << it->get_date() << "  ";
                phase1 << it->get_amount() << endl;
            }
            phase1.close();
        }
    }
    void find_Smuggler()
    {
        for (auto qw = person.begin(); qw != person.end(); qw++)
        {

            if (qw->get_work() == "قاچاقچی")
            {
                smuggler.push_back(*qw);
            }
        }
    }
    bool is_Smuggler(string ssn)
    {
        for (auto qw = person.begin(); qw != person.end(); qw++)
        {

            if (qw->get_ssn() == ssn && qw->get_work() == "قاچاقچی")
            {
                return true;
            }
        }
        return false;
    }
    list<node_person> sazman_To_Work()
    {
        list<node_person> workedPersons;
        for (auto qw = person.begin(); qw != person.end(); qw++)
        {

            if (qw->get_work() == "گمرک" || qw->get_work() == "سازمان بنادر")
            {
                workedPersons.push_back(*qw);
            }
        }
        return workedPersons;
    }
    list<node_person> buy(list<node_person> persons)
    {
        list<node_person> selectedPersons;
        for (auto zz = persons.begin(); zz != persons.end(); zz++)
        {
            for (auto qw = ownership.begin(); qw != ownership.end(); qw++)
            {
                if (zz->get_ssn() == qw->get_from() && (qw->grt_date().find("2021") != string::npos || qw->grt_date().find("2020") != string::npos || qw->grt_date().find("2019") != string::npos))
                {
                    selectedPersons.push_back(*zz);
                }
            }
        }
        return selectedPersons;
    }
    bool home(list<node_person> persons)
    {
        list<node_person> allPersons;
        allPersons = buy(persons);
        for (auto zz = allPersons.begin(); zz != allPersons.end(); zz++)
        {
            for (auto qq = house.begin(); qq != house.end(); qq++)
            {
                if (zz->get_ssn() == qq->get_ssn())
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool Car(list<node_person> persons)
    {
        list<node_person> allPersons;
        allPersons = buy(persons);
        for (auto zz = allPersons.begin(); zz != allPersons.end(); zz++)
        {
            for (auto qq = car.begin(); qq != car.end(); qq++)
            {
                if (zz->get_ssn() == qq->get_ssn())
                {
                    return true;
                }
            }
        }
        return false;
    }
    string findAccountIdFromSsn(string ssn)
    {
        for (auto it = bank_acount.begin(); it != bank_acount.end(); it++)
        {
            if (it->get_ssn() == ssn)
            {
                return it->get_account_id();
            }
        }
    }
    list<node_person>::iterator findSsnFromAccountId(string accounId)
    {
        for (auto it = bank_acount.begin(); it != bank_acount.end(); it++)
        {
            if (it->get_account_id() == accounId)
            {
                for (auto tt = person.begin(); tt != person.end(); tt++)
                {
                    if (tt->get_ssn() == it->get_ssn())
                    {
                        return tt;
                    }
                }
            }
        }
    }
    list<node_person> intermediary(list<node_person> persons)
    {
        list<node_person> suspects;
        for (auto it = persons.begin(); it != persons.end(); it++)
        {
            string ssn = findAccountIdFromSsn(it->get_ssn());
            for (auto onePerson = transaction.begin(); onePerson != transaction.end(); onePerson++)
            {
                if (ssn == onePerson->get_from())
                {
                    suspects.push_back(*findSsnFromAccountId(onePerson->get_to()));
                }
            }
        }
        return suspects;
    }
    list<node_person> find_RelationShips(list<node_person>::iterator OnePerson)
    {
        list<node_person> relationshipPerson;
        for (auto qw = relationship.begin(); qw != relationship.end(); qw++)
        {
            if (qw->get_from() == OnePerson->get_ssn())
            {
                for (auto ss = person.begin(); ss != person.end(); ss++)
                {
                    if (qw->get_to() == ss->get_ssn())
                    {
                        relationshipPerson.push_back(*ss);
                    }
                }
            }
        }
        relationshipPerson.push_back(*OnePerson);
        return relationshipPerson;
    }
    void phas_2()
    {
        list<node_person> selected;
        list<node_person> selectedPersons;
        selected = sazman_To_Work();
        for (auto onePerson = selected.begin(); onePerson != selected.end(); onePerson++)
        {
            if (home(find_RelationShips(onePerson)) || Car(find_RelationShips(onePerson)))
            {
                suspects.push_back(*onePerson);
            }
        }
        ofstream phase2("phase2.txt");
        phase2 << "first_name "
               << "last_name "
               << "ssn "
               << "birthday "
               << "city "
               << "work" << endl;
        for (auto it = suspects.begin(); it != suspects.end(); it++)
        {
            phase2 << it->get_first_name() << "  ";
            phase2 << it->get_last_name() << "  ";
            phase2 << it->get_ssn() << "  ";
            phase2 << it->get_birthday() << "  ";
            phase2 << it->get_city() << "  ";
            phase2 << it->get_work() << "\n";
        }
        phase2.close();
    }
    list<node_person> phas_3(list<node_person> suspects)
    {
        list<node_person> persons;
        persons = intermediary(suspects);
        return persons;
    }
    void phas_4()
    {
        find_Smuggler();
        for (auto it = smuggler.begin(); it != smuggler.end(); it++)
        {
            string ssn = it->get_ssn();
            string phonenumber;
            for (auto it1 = phone_number.begin(); it1 != phone_number.end(); it1++)
            {

                if (it1->get_ssn() == ssn)
                {
                    phonenumber = it1->get_number();
                    break;
                }
            }
            for (auto it1 = call.begin(); it1 != call.end(); it1++)
            {
                if (it1->get_from() == phonenumber)
                {
                    phonenumber = it1->get_to();
                    call.erase(it1);
                    it--;
                    break;
                }
                else
                {
                    if (it1->get_to() == phonenumber)
                    {
                        phonenumber = it1->get_from();
                        call.erase(it1);
                    it--;
                        break;
                    }
                }
            }
            for (auto it1 = phone_number.begin(); it1 != phone_number.end(); it1++)
            {
                if (phonenumber == it1->get_number())
                {
                    ssn = it1->get_ssn();
                    break;
                }
            }
            for (auto it1 = suspects.begin(); it1 != suspects.end(); it1++)
            {
                if (ssn == it1->get_ssn())
                {
                    criminals.push_back(*it1);
                    break;
                }
            }
        }
        list<node_person> criminals1;
        int f=0;
        for(auto it=criminals.begin();it!=criminals.end();it++)
        {
            f=0;
            for(auto it1=criminals1.begin();it1!=criminals1.end();it1++)
            {
                if(it->get_ssn()==it1->get_ssn())
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                criminals1.push_front(*it);
            }
        }
        ofstream phase4("criminals.txt");
        phase4 << "first_name "
               << "last_name "
               << "ssn "
               << "birthday "
               << "city "
               << "work" << endl;
        for (auto it = criminals1.begin(); it != criminals1.end(); it++)
        {
            phase4 << it->get_first_name() << "  ";
            phase4 << it->get_last_name() << "  ";
            phase4 << it->get_ssn() << "  ";
            phase4 << it->get_birthday() << "  ";
            phase4 << it->get_city() << "  ";
            phase4 << it->get_work() << "\n";
        }
        phase4.close();
    }
};
int main()
{
    system("color EC");
    cout << "start" << endl;
    graph *a = new graph;
    a->init_node_person();
    a->init_node_car();
    a->init_node_house();
    a->init_node_bank_acount();
    a->init_node_phone_number();
    a->init_edge_ownership();
    a->init_edge_relationship();
    a->init_edge_transaction();
    a->init_edge_call();
    string aa;
    while(true)
    {
        cout<<"enter the number of the phaz you want 1or2or4"<<endl;
        cout<<"if you end enter -1"<<endl;
        cin>>aa;
        if(aa=="1")
        {
            cout << "phaz 1 running" << endl;
            a->phas_1();
            cout << "phaz 1 ended" << endl;
            continue;
        }
        if(aa=="2")
        {
            cout << "phaz 2 running" << endl;
            a->phas_2();
            cout << "phaz 2 ended" << endl;
            continue;
        }
        if(aa=="4")
        {
            cout << "phaz 4 running" << endl;
            a->phas_4();
            cout << "phaz 4 ended" << endl;
        }
        if(aa=="-1")
        {
            break;
        }
    }
    cout << "finish";
    return 0;
}

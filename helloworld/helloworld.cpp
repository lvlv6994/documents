#include<iostream>
using namespace std;

// need to think about THE structure of CPP.
#ifndef HELLOWORLD
#define HELLOWORLD
#endif

class UserReadVo{
private:
  string name;
public:
  UserReadVo(string name){
    this-> name = name;
  }
};
class UserListVo{
private:
  string name;
  string address;
  int age;
public:
  void setName(string name){
    this->name = name;
  }
  string getName(){
    return this->name;
  }
};

class UserWriteVo{
private:
  string name;
  string address;
  int age;
public:
  void setAge(int age){
    this->age = age;
  }
  int getAge(){
    return this->age;
  }
  void setAddress(string address){
    this->address = address;
  }
  string getAddress(){
    return this->address;
  }
  void setName(string name){
    this->name = name;
  }
  string getName(){
    return this->name;
  }
};

class User{
private:
  string name;
  string address;
public:
  User(string name,string address){
    this->name = name;
    this->address = address;
  }
  string getName(){
    return this->name;
  }
  string getAddress(){
    return this->address;
  }
};

int main(){
  string name = "tom";
  string address = "Beijing";
  string helloworld = "helloworld helloworld";
  cout << helloworld <<endl;
  User * user = new User(name,address);
  cout << user->getName() << " " << user->getAddress() << endl;
  UserWriteVo * userwritevo = new UserWriteVo();
  userwritevo->setName(name);
  cout << userwritevo -> getName() << endl;
  UserListVo userListVo;
  userListVo.setName("timi");
  cout << userListVo.getName() << endl;
  return 0;
}

#include <iostream>
using namespace std;
class Note
{
public:
  string name;
  string about;
  string date;

  void addnote()
  {
    cout << "name: ";
    cin >> name;
    cout << "about: ";
    cin >> about;
    cout << "date: ";
    cin >> date;
    cout << "note added" << endl;
  }
  void selnote()
  {
    cout << "your note"<<endl;
    cout << name << endl;
    cout << about << endl;
    cout << date << endl;
  }
  void edit()
  {
    cout << "old name " + name << endl;
    cout << "new name : ";
    cin >> name;
    cout << "old about " + about << endl;
    cout << "new about : ";
    cin >> about;
    cout << "old date " + date << endl;
    cout << "date: ";
    cin >> date;
  }
  void delate()
  {
    name = "none";
    about = "none";
    date = "none";
  }
};
string choose;
int main()
{
  Note n1;
  Note n2;
  int addcount = 0;
  bool note1d = false;
  bool note2d = false;
  bool keep = true;
  while (keep == true)
  {
    cout << "1: add note || 2: open note || 3: edit || 4: delate || 5: exit" << endl;
    cin >> choose;
    if (choose == "1")
    {
      // add note
      int choose_add = 0;
      cout << "select note" << endl;
      cout << "1: note 1 || 2: note 2" << endl;
      cin >> choose_add;
      if (choose_add == 1)
      {
        n1.addnote();
        n1.selnote();
      }
      else if (choose_add == 2)
      {
        n2.addnote();
        n2.selnote();
      }
    }
    else if (choose == "2")
    {
      // open note
      int choose_open = 0;
      cout << "select note" << endl;
      cout << "1: note 1 || 2: note 2" << endl;
      cin >> choose_open;
      if (choose_open == 1)
      {
        n1.selnote();
      }
      else if (choose_open == 2)
      {
        n2.selnote();
      }
    }
    else if (choose == "3")
    {
      // edit
      int choose_edit = 0;
      cout << "select note" << endl;
      cout << "1: note 1 || 2: note 2" << endl;
      cin >> choose_edit;
      if (choose_edit == 1)
      {
        n1.edit();
        n1.selnote();
      }
      else if (choose_edit == 2)
      {
        n2.edit();
        n2.selnote();
      }
    }
    else if (choose == "4")
    {
      // delate
      string select_to_delate = "0";
      cout << "Select 1: note 1 || 2: note 2" << endl;
      cin >> select_to_delate;
      if (select_to_delate == "1")
      {
        n1.delate();
        bool note1d = true;
      }
      if (select_to_delate == "2")
      {
        n2.delate();
        bool note2d = true;
      }
    }
    else if (choose == "5")
    {
      // exit
      keep = false;
    }
    else
    {
      cout << "error see you leter" << endl;
      keep = false;
    }
  }
  return 0;
}

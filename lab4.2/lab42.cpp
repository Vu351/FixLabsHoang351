#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string file_format(const string file_path_full)
{
    string exp;
    exp = file_path_full;
    exp.erase(0, file_path_full.rfind(".") + 1);
    return exp;
}
string file_name(const string file_path_full)
{
    string name;
    name = file_path_full;
    name.erase(0, file_path_full.rfind("\\") + 1);
    name.erase(name.rfind("."));
    return name;
}
string file_path(const string file_path_name)
{
    string path;
    path = file_path_name;
    path.erase(file_path_name.rfind("\\") + 1);
    return path;
}
char file_disk(const string file_path_name)
{
    char diskname;
    diskname = file_path_name[0];
    return diskname;
}
bool file_rename(string& file_path_name)
{
    string format, name, path;
    format = file_format(file_path_name);
    cin >> name;
    path = file_path(file_path_name);
    cout << path << name << "." << format << endl;
    file_path_name = path + name + "." + format;
    return true;
}
string file_path_copy(const string* file_path_full)
{
    string path_copy = *file_path_full;
    const int pos = file_path_full->find_last_of(".");
    path_copy.insert(pos, "_copy");
    return path_copy;

}
bool file_copy(const string* file_path_full)
{
    đặt con trỏ tên buffer
    char* buffer;
    int len = 256;
    chúng ta ghi dữ liệu vào file
    ifstream in(*file_path_full, ios_base::in);
    chúng ta xuất dữ liệu ra file mới 
    ofstream out(file_path_copy(file_path_full), ios_base::out);
    if (!in || !out)
    {
        return false;
    }
    cấp phát bộ nhớ cho len
    buffer = new char[len];
    kiểm tra file có rỗng không
    while (!in.eof())
    {
        đọc buffer vào len
        in.read(buffer, len);
        if (in.gcount())
        {
            viết buffer sang file out
            out.write(buffer, in.gcount());
        }
    }
    đóng cả 2 file 
    in.close();
    out.close();
    giải phóng bộ nhớ 
    delete[] buffer;
    return true;
}
int main()
{
    int choise = 0;
    string file_path_full;
    bool retult;
    cout << "Input path to file : ";

    cin >> file_path_full;

    while (true)
    {
        cout << "\n1.file format \n" << "2.file_name \n" << "3.file_path \n" << "4.file_disk \n" << "5.file_rename \n" << "6.file_copy \n" << "7. exit\n";
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            cout << file_format(file_path_full) << endl;
            break;
        }
        case 2:
        {
            cout << file_name(file_path_full) << endl;
            break;
        }
        case 3:
        {
            cout << file_path(file_path_full);
            break;
        }
        case 4:
        {
            cout << file_disk(file_path_full);
            break;
        }
        case 5:
        {
            cout << file_rename(file_path_full);
            break;
        }
        case 6:
        {
            cout << file_copy(&file_path_full);
            break;
        }
        case 7:
        {
            return 0;
            break;
        }
        }
    }
}

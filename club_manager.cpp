#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// 第一个类：成员类
class Member
{
private:
    string stuId;    // 学号
    string name;     // 姓名
    string role;     // 职位
public:
    Member() {}
    Member(string s, string n, string r) :stuId(s), name(n), role(r) {}

    void setData(string s, string n, string r)
    {
        stuId = s;
        name = n;
        role = r;
    }

    string getId() const { return stuId; }
    string getName() const { return name; }
    string getRole() const { return role; }

    void showInfo() const
    {
        cout << left << setw(12) << stuId
            << setw(12) << name
            << setw(12) << role << endl;
    }
};

// 第二个类：社团类
class Club
{
private:
    string clubName;
    string clubType;
    vector<Member> memList;
public:
    Club() {}
    Club(string cn, string ct) :clubName(cn), clubType(ct) {}

    void setClub(string cn, string ct)
    {
        clubName = cn;
        clubType = ct;
    }

    string getClubName() const { return clubName; }

    // 添加成员
    void addMember(Member m)
    {
        memList.push_back(m);
    }

    // 展示社团所有成员
    void showMember()
    {
        cout << "\n=====【" << clubName << "】- " << clubType << " =====" << endl;
        if (memList.empty())
        {
            cout << "暂无社团成员信息\n";
            return;
        }
        cout << left << setw(12) << "学号" << setw(12) << "姓名" << setw(12) << "职位" << endl;
        for (auto& m : memList)
            m.showInfo();
    }

    vector<Member>& getMemList()
    {
        return memList;
    }
};

// 第三个类：后台管理类
class Admin
{
public:
    // 按学号查找成员
    void searchMember(Club& c, string id)
    {
        bool flag = false;
        cout << "\n查找结果：" << endl;
        for (auto& m : c.getMemList())
        {
            if (m.getId() == id)
            {
                m.showInfo();
                flag = true;
            }
        }
        if (!flag) cout << "未找到该成员\n";
    }

    // 删除成员
    void delMember(Club& c, string id)
    {
        auto& v = c.getMemList();
        for (auto it = v.begin();it != v.end();it++)
        {
            if (it->getId() == id)
            {
                v.erase(it);
                cout << "成员移除成功\n";
                return;
            }
        }
        cout << "成员不存在\n";
    }

    // 统计社团人数
    void countNum(Club& c)
    {
        cout << "\n当前社团总人数：" << c.getMemList().size() << " 人\n";
    }
};

// 组员1：菜单界面
void menu()
{
    system("cls");
    cout << "========= 校园社团管理系统 =========" << endl;
    cout << "1. 设置社团基本信息" << endl;
    cout << "2. 录入社团成员" << endl;
    cout << "3. 查看全部成员" << endl;
    cout << "4. 按学号查找成员" << endl;
    cout << "5. 移除社团成员" << endl;
    cout << "6. 统计社团总人数" << endl;
    cout << "0. 退出系统" << endl;
    cout << "====================================" << endl;
    cout << "请选择操作：";
}

// 主函数（组员1负责）
int main()
{
    Club myClub;
    Admin manager;
    int op;
    string cname, ctype, sid, name, role;

    while (true)
    {
        menu();
        cin >> op;
        if (op == 0)
        {
            cout << "系统退出成功！" << endl;
            break;
        }
        switch (op)
        {
        case 1:
            cout << "输入社团名称：";cin >> cname;
            cout << "输入社团类型：";cin >> ctype;
            myClub.setClub(cname, ctype);
            cout << "社团信息设置完成！\n";
            break;
        case 2:
            cout << "输入学号 姓名 职位：";
            cin >> sid >> name >> role;
            myClub.addMember(Member(sid, name, role));
            cout << "成员录入成功！\n";
            break;
        case 3:
            myClub.showMember();
            break;
        case 4:
            cout << "输入查找学号：";cin >> sid;
            manager.searchMember(myClub, sid);
            break;
        case 5:
            cout << "输入移除学号：";cin >> sid;
            manager.delMember(myClub, sid);
            break;
        case 6:
            manager.countNum(myClub);
            break;
        default:
            cout << "输入选项错误！\n";
        }
        system("pause");
    }
    return 0;
}

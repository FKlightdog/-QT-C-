#ifndef TEACHERINFO_H
#define TEACHERINFO_H

#include<QString>
class TeacherInfo
{
private:
    QString id,password,name,colledge;
public:
    TeacherInfo();
    TeacherInfo(QString tid,QString tpassword,QString tname,QString tcolledge)
    {
        id=tid;
        password=tpassword;
        name=tname;
        colledge=tcolledge;
    }
    QString get_id()
    {
        return id;
    }
    QString get_password()
    {
        return password;
    }
    QString get_name()
    {
        return name;
    }
    QString get_colledge()
    {
        return colledge;
    }
    void set_id(QString tid)
    {
        id=tid;
    }
    void set_password(QString tpassword)
    {
        password=tpassword;
    }
    void set_name(QString tname)
    {
        name=tname;
    }
    void set_colledge(QString tcolledge)
    {
        colledge=tcolledge;
    }
};

#endif // TEACHERINFO_H

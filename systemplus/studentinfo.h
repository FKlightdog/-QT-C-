#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include<QString>
class StudentInfo
{
private:
        QString id,name;
        int math,english,languagec;
        double avg;
public:
    StudentInfo();
    StudentInfo(QString tid,QString tname,int tmath,int tenglish,int tlanguagec)
    {
        id=tid;
        name=tname;
        math=tmath;
        english=tenglish;
        languagec=tlanguagec;
        avg=(tmath+tenglish+tlanguagec)/3.0;
    }
    QString get_id()
    {
        return id;
    }
    QString get_name()
    {
        return name;
    }
    int get_math()
    {
        return math;
    }
    int get_english()
    {
        return english;
    }
    int get_languagec()
    {
        return languagec;
    }
    double get_avg()
    {
        return avg;
    }
    void  set_id(QString tid)
    {
        id=tid;
    }
    void set_name(QString tname)
    {
        name=tname;
    }
    void set_math(int tmath)
    {
        math=tmath;
       avg=(math+english+languagec)/3.0;
    }
    void set_english(int tenglish)
    {
        english=tenglish;
        avg=(math+english+languagec)/3.0;
    }
    void set_languagec(int tlanguagec)
    {
        languagec=tlanguagec;
        avg=(math+english+languagec)/3.0;
    }

};

#endif // STUDENTINFO_H

#ifndef WEEK_H
#define WEEK_H

class Week
{
public:
    Week();
    int getId() const;
    void setId(int value);

    int getName() const;
    void setName(int value);

private:
    int id;
    int name;
};

#endif // WEEK_H

#ifndef DAY_H
#define DAY_H

class day
{
public:
    day();
    int getId() const;
    void setId(int value);

    int getName() const;
    void setName(int value);

private:
    int id;
    int name;
};

#endif // DAY_H

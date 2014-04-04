#ifndef PERIOD_H
#define PERIOD_H

class Period
{
public:
    Period();
    int getId() const;
    void setId(int value);

    int getFrom() const;
    void setFrom(int value);

    int getLength() const;
    void setLength(int value);

private:
    int id;
    int from;
    int length;
};

#endif // PERIOD_H

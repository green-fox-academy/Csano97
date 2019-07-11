#ifndef DAY_3_COUNTER_H
#define DAY_3_COUNTER_H


class counter
{
public:
    counter();
    counter(int start);

    void add();
    void add(int number);
    int get();
    void reset();
private:
    int _start = 0;
};


#endif //DAY_3_COUNTER_H

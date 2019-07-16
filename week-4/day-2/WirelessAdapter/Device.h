#ifndef DAY_2_DEVICE_H
#define DAY_2_DEVICE_H


class Device
{
public:
    Device(int id);

   virtual int getId() const;

protected:
    int _id;
};


#endif //DAY_2_DEVICE_H

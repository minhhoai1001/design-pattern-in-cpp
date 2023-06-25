#ifndef BRIDGE_DISPLAY_IMPL_H_
#define BRIDGE_DISPLAY_IMPL_H_

class DisplayImpl
{
public:
    virtual ~DisplayImpl();

    virtual void implOpen() const = 0;

    virtual void implWrite() const = 0;

    virtual void implClose() const = 0;
};

#endif
#ifndef BRIDGE_DISPLAY_H_
#define BRIDGE_DISPLAY_H_

class DisplayImpl;

class Display
{
private:
    const DisplayImpl* impl;

public:
    Display(const DisplayImpl* impl);

    virtual ~Display();

    void output() const;

protected:
    void open() const;

    void write() const;

    void close() const;
};

#endif
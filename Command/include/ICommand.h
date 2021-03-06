#ifndef HEADFIRSTDESIGNPATTERNS_ICOMMAND_H
#define HEADFIRSTDESIGNPATTERNS_ICOMMAND_H

class ICommand
{
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};

#endif //HEADFIRSTDESIGNPATTERNS_ICOMMAND_H

#ifndef __EXPECTVALUESTATE_H__
#define __EXPECTVALUESTATE_H__
#include "AbstractState.h"

class ExpectValueState : public AbstractState{
public:
    StateCode_Type handle(AbstractContext*, QQJsonDocument *) override;
};

#endif

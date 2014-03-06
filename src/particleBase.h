//
//  particleBase.h
//  particlesystem1
//
//  Created by Dan on 3/3/14.
//
//

#ifndef __particlesystem1__particleBase__
#define __particlesystem1__particleBase__

#include <iostream>
#include "ofMain.h"
class particleBase{
    public:
    particleBase(){}
    virtual void update() = 0;
    virtual void display() = 0;
    virtual void checkEdges()=0;
    virtual bool isDead() = 0;
    virtual void addParticle() =0;
    virtual ~particleBase(){
    }

};




#endif /* defined(__particlesystem1__particleBase__) */

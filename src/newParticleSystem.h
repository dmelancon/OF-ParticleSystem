//
//  newParticleSystem.h
//  particlesystem1
//
//  Created by Dan on 3/3/14.
//
//

#ifndef __particlesystem1__newParticleSystem__
#define __particlesystem1__newParticleSystem__


#include <iostream>
#include "ofMain.h"
#include "particleBase.h"
#include "ParticleSystem.h"

class newParticleSystem :public particleBase{
    
    public:
    newParticleSystem(ofVec3f, float);
    virtual void update();
    virtual void display();
    virtual bool isDead();
    virtual void checkEdges();
    virtual void addParticle();
    std::vector<particleBase*> particles;
    ~newParticleSystem();
    private:
    
    ofVec3f origin;
    float radius;
    float size;
    float lifespan;
    float m;
    
    
    
};


#endif /* defined(__particlesystem1__newParticleSystem__) */

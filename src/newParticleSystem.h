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
    void update();
    void display();
    bool isDead();
    void checkEdges();
    void addParticle();
    ~newParticleSystem();
    private:
    std::list<particleBase*> particles;
    ofVec3f origin;
    float radius;
    float size;
    float lifespan;
    float m;
    
    
};


#endif /* defined(__particlesystem1__newParticleSystem__) */

//
//  Particle.h
//  particlesystem1
//
//  Created by Dan on 3/2/14.
//
//

#ifndef __particlesystem1__Particle__
#define __particlesystem1__Particle__

#include <iostream>
#include "ofMain.h"
#include "particleBase.h"
#include "newParticleSystem.h"

class Particle : public particleBase{
    public:
    Particle(ofVec3f, float);
    virtual void update();
    virtual void display();
    virtual void checkEdges();
    virtual bool isDead();
    virtual void addParticle();
    ofVec3f location;
    ofVec3f velocity;
    ofVec3f acceleration;
    float mass;
    float lifespan;
    ofColor color;
    std::vector<particleBase*> particles;
};
#endif /* defined(__particlesystem1__Particle__) */

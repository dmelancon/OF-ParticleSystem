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
    void update();
    void display();
    void checkEdges();
    bool isDead();
    void addParticle();
    Particle(ofVec3f, float);
    ~Particle();
    private:
    ofVec3f location;
    ofVec3f velocity;
    ofVec3f acceleration;
    float mass;
    float lifespan;
    ofColor color;
    std::list<particleBase*> particles;
    
};
#endif /* defined(__particlesystem1__Particle__) */



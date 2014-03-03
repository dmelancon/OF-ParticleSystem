//
//  ParticleSystem.h
//  particlesystem1
//
//  Created by Dan on 3/2/14.
//
//

#ifndef __particlesystem1__ParticleSystem__
#define __particlesystem1__ParticleSystem__

#include <iostream>
#include "ofMain.h"
#include "particleBase.h"
#include "particle.h"


class ParticleSystem :public particleBase{
    
    public:
        ParticleSystem(ofVec3f, float);
        virtual void update();
        virtual void display();
        virtual bool isDead();
        virtual void checkEdges();
        virtual void addParticle();
        std::vector<particleBase*> particles;
    ~ParticleSystem();
    
    private:
    
        ofVec3f origin;
        float radius;
        float size;
        float lifespan;
        float m;
    
    
    
};
#endif /* defined(__particlesystem1__ParticleSystem__) */




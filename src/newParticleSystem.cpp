//
//  newParticleSystem.cpp
//  particlesystem1
//
//  Created by Dan on 3/3/14.
//
//

#include "newParticleSystem.h"
#include "testApp.h"

newParticleSystem::newParticleSystem(ofVec3f location ,float mass){
    origin = location;
    m = mass;
    radius= 500;
    lifespan = 500;
}


void newParticleSystem::addParticle(){
    
    particles.push_back(new Particle(ofVec3f(origin.x,origin.y,origin.z), m));
                            
}

void newParticleSystem::update(){
    for(auto it = particles.begin(); it != particles.end();){
        if((*it)->isDead()){
            delete (*it);
            it = particles.erase(it);
        }else{
            (*it)->addParticle();
            (*it)->update();
            ++it;
        }
        
                 }
    
    
   lifespan --;
    
}

void newParticleSystem::display(){
for(auto it = particles.begin(); it != particles.end();++it){
       (*it)->display();
        
    }
}

bool  newParticleSystem::isDead(){
    if (lifespan<0.0){
        return true;
    }else {
        return false;
    }

    }

void newParticleSystem::checkEdges(){
    for(auto it = particles.begin(); it != particles.end();++it){
        (*it)->display();
        
    }
}


newParticleSystem::~newParticleSystem(){
    particles.clear();
    
}
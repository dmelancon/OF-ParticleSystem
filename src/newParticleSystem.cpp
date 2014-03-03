//
//  newParticleSystem.cpp
//  particlesystem1
//
//  Created by Dan on 3/3/14.
//
//

#include "newParticleSystem.h"

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
    for(int i = 0; i<particles.size(); i++){
        particles[i]->addParticle();
        particles[i]->update();
        if(particles[i]->isDead()){
            delete particles[i];
            particles.erase(particles.begin()+i);
        }

                 }
    
    
   lifespan --;
    
}

void newParticleSystem::display(){
    for(int i=0;i<particles.size();i++){
        
        particles[i]->display();
        
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
    for(int i = 0; i<particles.size(); i++){
        particles[i]->checkEdges();
           }
}
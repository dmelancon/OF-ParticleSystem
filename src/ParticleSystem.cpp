//
//  ParticleSystem.cpp
//  particlesystem1
//
//  Created by Dan on 3/2/14.
//
//
#include "ParticleSystem.h"

ParticleSystem::ParticleSystem(ofVec3f location ,float mass){
    origin = location;
    m = mass;
    radius= 500;
    lifespan =200;
}


void ParticleSystem::addParticle(){

    particles.push_back(new Particle(ofVec3f(origin.x,origin.y,origin.z), m));

}

void ParticleSystem::update(){
    for(int i = 0; i<particles.size(); i++){
        particles[i]->addParticle();
        particles[i]->update();
        
        if (particles[i]->isDead()){
                delete particles[i];
                particles.erase(particles.begin()+i);
            }

                    }
    lifespan --;
    
}

void ParticleSystem::display(){
    for(int i=0;i<particles.size();i++){
    
        particles[i]->display();
        
    }
}

bool  ParticleSystem::isDead(){
    if (lifespan<0.0){
        return true;
    }else {
        return false;
    }


}

void ParticleSystem::checkEdges(){
    for(int i = 0; i<particles.size(); i++){
        particles[i]->checkEdges();}
}
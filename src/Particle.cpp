//
//  Particle.cpp
//  particlesystem1
//
//  Created by Dan on 3/2/14.
//
//

#include "Particle.h"
#include "ofMain.h"

Particle::Particle (ofVec3f p, float m ){
    acceleration.set(ofRandom(-.1,.1),-.05,ofRandom(-.1,.1));
    velocity.set(ofRandom(-1,1),0,ofRandom(-1,1));
    location = p;
    lifespan = 200;
    mass = m;
    color = ofColor(ofRandom(0,255));
}



void Particle::update() {
    velocity += acceleration;
    location +=velocity;
    lifespan -= 1.0;
    for(int i = 0; i<particles.size(); i++){
        particles[i]->addParticle();
        particles[i]->update();
        if(particles[i]->isDead()){
            delete particles[i];
            particles.erase(particles.begin()+i);
        }
        
    }
}



void Particle::display(){
    for(int i=0;i<particles.size();i++){
        
        particles[i]->display();
    }

    ofSetColor(255);
    //ofSetSphereResolution(100);
    ofPushMatrix();
    ofTranslate(location.x,location.y,location.z);
    ofCircle(2,2,2 );
    ofPopMatrix();
    
}


void Particle::checkEdges(){
//    if (location.y<0 ){
//        location.y=0;
//        velocity.y *=-.8;
//        velocity.x*=.98;
//        velocity.z*=.98;
//    }
//    if (location.y>ofGetHeight()){
//        location.y=ofGetHeight();
//        velocity.y *=-.8;
//        velocity.x*=.98;
//        velocity.z*=.98;
//    }
//    if (location.x<0 ){
//            location.x=0;
//            velocity.x *=-.8;
//            velocity.y*=.98;
//            velocity.z*=.98;
//        }
//    if (location.x>ofGetWidth()){
//            location.x=ofGetWidth();
//            velocity.x *=-.8;
//            velocity.y*=.98;
//            velocity.z*=.98;
//        }
//    if (location.z>-400 ){
//        location.z=-400;
//        velocity.z *=-.8;
//        velocity.y*=.98;
//        velocity.x*=.98;
//    }
//    if (location.z<-1000){
//        location.z=-1000;
//        velocity.z *=-.8;
//        velocity.y*=.98;
//        velocity.z*=.98;
//    }

}
bool Particle::isDead() {
    if (lifespan<0.0){
        return true;
    }else {
        return false;
    }
}
void Particle::addParticle(){
    if (lifespan==100){
        
           particles.push_back(new newParticleSystem(ofVec3f(location.x,location.y,location.z), mass));
    }
}

    
    






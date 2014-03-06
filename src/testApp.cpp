#include "testApp.h"
#include <ofLight.h>

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    gravity.set(0,-.5,0);
}

//--------------------------------------------------------------
void testApp::update(){
    for(auto it = systems.begin(); it != systems.end();){
        
        if((*it)->isDead()){
            //delete particles[i];
            it = systems.erase(it);
        }else{
            (*it)->addParticle();
            (*it)->update();
            it++;
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    spotlight.enable();
    easyCam.begin();
    ofPushMatrix();
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    for(auto it=systems.begin();it != systems.end();++it){
        (*it)->display();
    }
    ofPopMatrix();
    easyCam.end();
   spotlight.disable();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    systems.push_back(new Particle(ofVec3f(ofRandom(ofGetWidth()),ofGetHeight(),ofRandom(-400,-1200)), ofRandom(10,100)));

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    }

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    
       
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

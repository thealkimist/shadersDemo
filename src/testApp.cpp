#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    
    shader.load("", "shader.frag");
    
    mesh.setMode(OF_PRIMITIVE_TRIANGLES);
    
    video.initGrabber(640, 480);
    
    
    
//    mesh.clear();
//    mesh.addTexCoord(ofVec2f(0,0));
//    mesh.addColor(ofColor(255,50,150));
//    mesh.addVertex(ofPoint(0,0));
//    
//    mesh.addTexCoord(ofVec2f(640,0));
//    mesh.addColor(ofColor(0,50,255));
//    mesh.addVertex(ofPoint(640,0));
//    
//    mesh.addTexCoord(ofVec2f(mouseX,mouseY));
//    mesh.addColor(ofColor(150,50,255));
//    mesh.addVertex(ofPoint(640,480));
//    
//    mesh.addTexCoord(ofVec2f(mouseX,mouseY));
//    mesh.addColor(ofColor(150,50,255));
//    mesh.addVertex(ofPoint(640,480));
//    
//    mesh.addTexCoord(ofVec2f(0,480));
//    mesh.addColor(ofColor(0,255,0));
//    mesh.addVertex(ofPoint(0,480));
//    
//    mesh.addTexCoord(ofVec2f(0,0));
//    mesh.addColor(ofColor(0,255,255));
//    mesh.addVertex(ofPoint(0,0));
    
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
        mesh.clear();
    mesh.addTexCoord(ofVec2f(0,0));
    mesh.addColor(ofColor(255,50,150));
    mesh.addVertex(ofPoint(0,0));
    
    mesh.addTexCoord(ofVec2f(640,0));
    mesh.addColor(ofColor(0,50,255));
    mesh.addVertex(ofPoint(640,0));
    
    mesh.addTexCoord(ofVec2f(mouseX,mouseY));
    mesh.addColor(ofColor(150,50,255));
    mesh.addVertex(ofPoint(640,480));
    
    mesh.addTexCoord(ofVec2f(mouseX,mouseY));
    mesh.addColor(ofColor(150,50,255));
    mesh.addVertex(ofPoint(640,480));
    
    mesh.addTexCoord(ofVec2f(0,480));
    mesh.addColor(ofColor(0,255,0));
    mesh.addVertex(ofPoint(0,480));
    
    mesh.addTexCoord(ofVec2f(0,0));
    mesh.addColor(ofColor(0,255,255));
    mesh.addVertex(ofPoint(0,0));
    
    
    video.update();
}

//--------------------------------------------------------------
void testApp::draw(){

    ofBackground(0);
    ofSetColor(255,50,150);
//    ofNoFill();
    
//    glBegin(GL_TRIANGLES);
//    glVertex3f(0, 0, 0);
//    glVertex3f(640, 0, 0);
//    glVertex3f(640, 480, 0);
//    glVertex3f(0, 480, 0);
//    glEnd();
    
//    mesh.drawWireframe();
    shader.begin();
    shader.setUniform1f("time", ofGetElapsedTimef());
    shader.setUniformTexture("videoTex", video.getTextureReference(), 0);
    video.getTextureReference().bind();
    shader.setUniform2f("mouse", mouseX, mouseY);
    
    mesh.draw();
    
    video.getTextureReference().unbind();
    
    shader.end();
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

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

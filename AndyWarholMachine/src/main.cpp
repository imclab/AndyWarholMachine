#include "ofMain.h"
#include "testApp.h"

int main() {
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1680, 1050, OF_FULLSCREEN);
	ofRunApp(new testApp());
}

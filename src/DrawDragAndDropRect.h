#pragma once
#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class DrawDragAndDropRect
{
	public:
		void setUp(float _x, float _y, float _width, float _height);
		void draw();
		void keyReleased();
		void dragEvent(ofDragInfo dragInfo);
		//void setBonePosition(int x,int y);
		void update(ofVec2f modelPos, ofVec3f modelRotate, float modelSize);

	private:
		ofImage img;
		ofxAssimpModelLoader model;
		ofxAssimpModelLoader thumbnailModel;
		ofVec2f _bonePoint;
		float xPos, yPos, width, height;
		int bpx, bpy = 0;
		bool boneSetted = false;

		//短径内に指定の座標が含まれていればtrue,そうでなければfalse
		/*bool inside(float px, float py) {
			if (px > x && py > y && px < x + width && py < y + height) {
				return true;
			}
			return false;
		}*/
};


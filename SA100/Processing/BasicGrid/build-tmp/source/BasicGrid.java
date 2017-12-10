import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class BasicGrid extends PApplet {
  public void setup() {

int s = 1;

background(255);

textSize(14);
textAlign(CENTER);
fill(255);

strokeWeight(s);
for(int i=0;i<=width;i=i+width/16){
  line(i, 0, i, width);
  line(0, i, width, i);
}


strokeWeight(2*s);
for(int i=0;i<=width;i=i+width/8){
  line(i, 0, i, width);
  line(0, i, width, i);
}

strokeWeight(4*s);
for(int i=0;i<=width;i=i+width/4){
  line(i, 0, i, width);
  line(0, i, width, i);

}
strokeWeight(8*s);
for(int i=0;i<=width;i=i+width/2){
  line(i, 0, i, width);
  line(0, i, width, i);

}

fill(0,0,255);
for(int i=width/8;i<width;i=i+width/8){
	for(int j=width/8;j<width;j=j+width/8){
  		text("("+i+","+j+")", i, j - textDescent()); 
  	}
}

save("BasicGrid.png");
    noLoop();
  }

  public void settings() { size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "BasicGrid" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}

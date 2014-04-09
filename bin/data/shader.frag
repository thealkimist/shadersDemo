uniform float time;
uniform sampler2DRect videoTex;
uniform vec2 mouse;


void main(){
    //Four dimension vector
    
//    vec4 color = vec4(1.0);
    
//    color.r = abs(sin(time));
//    color.g = abs(cos(time * 0.3));
    vec2 st = gl_TextCoord[0].st;
    vec4 video = texture2DRect(videoTex, mouse);
    vec4 color = gl_Color;
    
    
    
    gl_FragColor = mix(video,color, abs(sin(time));
}
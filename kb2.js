/* Resetting the browser stylesheet */
* {
    padding: 0;
    margin: 0;
    box-sizing: border-box;
    overflow: hidden;
    background-color: #000;
    color: #fff;
}
  
/* Styling the heading */
h1 {
    display: flex;
    align-items: center;
    align-content: center;
    justify-content: center;
}
  
/* Position the mouse pointer and
    the background image */
.main_box,
.img,
.mouse {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
}
  
.main_box {
    cursor: none;
    margin-top: 3em;
}
  
.img,
.mouse {
    background-image: url(
'https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190417124305/250.png');
    background-size: cover;
    background-repeat: no-repeat;
    background-position: center;
}
  
/* Reduce the brightness of the image */
.img {
    filter: brightness(10%);
}
  
/* Make a circle with the clip-path
    property for the spotlight in the effect */
.mouse {
    clip-path: circle(5em at 0, 0);
}

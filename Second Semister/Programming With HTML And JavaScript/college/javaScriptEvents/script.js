var singleClick = document.getElementById("singleClick")
var doubleClick = document.getElementById("doubleClick")
var mouseOverOut = document.getElementById("mouseOverOut")
var reload = document.getElementById("body")

singleClick.onmouseover = function () {
    reload.style.backgroundColor = "#360000"
    singleClick.style.backgroundColor = "red"
    singleClick.style.color = "yellow"
    document.getElementById("afterClick").innerHTML = "I am single click JavaScript event. Single click on me to change the background color of the body to light blue."
    document.getElementById("title").innerHTML = "Single Ckick Event"
}
singleClick.onmouseout = function () {
    // reload.style.backgroundColor = "gray"
    singleClick.style.backgroundColor = "white"
    singleClick.style.color = "black"
    document.getElementById("afterClick").innerHTML = "JavaScript Common Events"
    document.getElementById("title").innerHTML = "Practical 3-E"
}
singleClick.onclick = function () {
    alert('Invalid input')
    reload.style.backgroundColor = "powderblue"
    // alert('Invalid Input');
}
doubleClick.onmouseover = function () {
    reload.style.backgroundColor = "#1d401b"
    doubleClick.style.backgroundColor = "maroon"
    doubleClick.style.color = "violet"
    document.getElementById("afterClick").innerHTML = "I am double click JavaScript event. Double click on me to change the background color of the body to light green."
    document.getElementById("title").innerHTML = "Double Ckick Event"
}
doubleClick.onmouseout = function () {
    reload.style.backgroundColor = "gray"
    doubleClick.style.backgroundColor = "#ffffff"
    doubleClick.style.color = "#000000"
    document.getElementById("afterClick").innerHTML = "JavaScript Common Events"
    document.getElementById("title").innerHTML = "Practical 3-E"
}
doubleClick.ondblclick = function () {
    reload.style.backgroundColor = "lightgreen"
}
mouseOverOut.onmouseover = function () {
    mouseOverOut.style.backgroundColor = "#707000"
    mouseOverOut.style.color = "red"
    document.getElementById("afterClick").innerHTML = "I am Mouse Over and Out JavaScript Event. Move the mouse on me to change my to red."
    document.getElementById("title").innerHTML = "Mouse Over or Out Event"
    reload.style.backgroundColor = "#3f003f"

}
mouseOverOut.onmouseout = function () {
    mouseOverOut.style.backgroundColor = "white"
    mouseOverOut.style.color = "black"
    document.getElementById("afterClick").innerHTML = "JavaScript Common Events"
    document.getElementById("title").innerHTML = "Practical 3-E"
    reload.style.backgroundColor = "gray"
}
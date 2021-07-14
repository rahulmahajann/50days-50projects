const open = document.querySelector('.open')
const close = document.querySelector('.close')
const skills = document.querySelector('.skills')
const about = document.querySelector('.about')
const connect = document.querySelector('.connect')
const achievement = document.querySelector('.achievement')
const main_box = document.querySelector('.main_box')

// adding the event listener for the mouse click for opening
// the nav bar
open.addEventListener('click', () =>{
    main_box.classList.add('show-nav')
}) 

// adding the event listener for the mouse click for closing
// the nav bar
close.addEventListener('click', () =>{
    main_box.classList.remove('show-nav')
}) 

skills.addEventListener('click', () =>{
    main_box.classList.remove('show-nav')
})

about.addEventListener('click', () =>{
    main_box.classList.remove('show-nav')
})

connect.addEventListener('click', () =>{
    main_box.classList.remove('show-nav')
})

achievement.addEventListener('click', () =>{
    main_box.classList.remove('show-nav')
})


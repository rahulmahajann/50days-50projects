const open = document.querySelector('.open')
const close = document.querySelector('.close')
const main_box = document.querySelector('.main_box')

open.addEventListener('click', () =>{
    main_box.classList.add('show-nav')
}) 

close.addEventListener('click', () =>{
    main_box.classList.remove('show-nav')
}) 
import React from 'react'

function Contactus(){
    return (
        <div>
            <h1> Contact Us </h1>
        <div id="contact-form">
            <input type="text" placeholder="Your Name" />
            <input type="email" placeholder="Your email address" />
            <textarea placeholder="Your message"></textarea>
            <button>Send Message</button>
            <span>Thank you!</span>
        </div>
        </div>
    )
}

export default Contactus
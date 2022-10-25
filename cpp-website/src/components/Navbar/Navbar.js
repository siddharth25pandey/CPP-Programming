import React from 'react'
import { Link } from 'react-router-dom';
import "./Navbar.css"

function Navbar(){
    const navstyle = {
        color: 'white',
        textDecoration: 'none'
    }
    return (
        <nav>
            <div><Link to="/" style={navstyle}>Home</Link> </div>
            <div><Link to="/about" style={navstyle}>About Us</Link> </div>
            <div><Link to="/contributors" style={navstyle}>Contributers List</Link> </div>
            <div><Link to="contact-us" style={navstyle}>Contact Us</Link> </div>
        </nav>
    );
}

export default Navbar;
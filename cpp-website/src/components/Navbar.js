import React from 'react'
import { Link } from 'react-router-dom';
import "../App.css"

function Navbar(){
    const navstyle = {
        color: 'white',
        textDecoration: 'none'
    }
    return (
        <nav>
            <Link to="/" style={navstyle}>Home</Link>
            <Link to="/about" style={navstyle}>About Us</Link>
            <Link to="/contributors" style={navstyle}>Contributers List</Link>
            <Link to="contact-us" style={navstyle}>Contact Us</Link>
        </nav>
    );
}

export default Navbar;
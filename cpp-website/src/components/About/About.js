import './About.css';
import img1 from '../../files/contribute.png'
import img2 from '../../files/community.png'
import img3 from '../../files/explore.png'
import React from "react";

function About(){

    return (
        <div className=' about'>
            <div className='container'>

                <div className='row'>
                    <div className='col-lg-4 col-md-4 mt-5 p-3'>
                        <img src={img1} />
                        <h1> We Explore</h1>
                    </div>
                    <div className='col-lg-4 col-md-4 mt-5 p-3'>
                        <img src={img2} />
                        <h1> We Contribute</h1>
                    </div>
                    <div className='col-lg-4 col-md-4 mt-5 p-3'>
                        <img src={img3} />
                        <h1> We Learn</h1>
                    </div>
                </div>

                <div className='m-5 p-5'>
                    <h2 className='text-center mt-3'> We are the community of CPP-Programmers on Github </h2>
                    <h5 className='text-center p-3'> CPP-Programming Repository contains all types of Progamming Algorithms </h5>
                </div>

                <button type="button" class="btn btn-dark"> : Github : </button>
            </div>
        </div>
    )
}

export default About;
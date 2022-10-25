import background from '../../files/back.png'


function Home(){
    return (
        <div style={{
            backgroundImage: `url(${background})`
        }} className="home">
            <h1>We do C++ here.</h1>
        </div>
    )
}

export default Home
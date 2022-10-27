import React, {useState, useEffect} from "react";
// import "../App.css"
// import { Link } from "react-router-dom";


function Contributers(){
    
    useEffect(() => {
        fetchContributers();
    }, [])

    const [items, setItems] = useState([]);

    const fetchContributers = async() => {
        const data = await (await fetch('https://raw.githubusercontent.com/siddharth25pandey/CPP-Programming/master/.all-contributorsrc')).json()   ;
        console.log(data.contributors);
        setItems(data.contributors);
    }
    return (
        <div>
            <h1>Contributers List</h1>
            <div className="list">
                {items.map(item =>(
                    <div key={item.name} className="profile">
                        <img src={item.avatar_url} className="profilepic" alt="no profile" />
                        <a href={`https://github.com/${item.login}`}>{item.name}</a>
                        <ul>
                            {item.contributions.map(contr =>(
                                <li key={contr}>
                                    {contr}
                                </li>
                            ))}
                        </ul>
                    </div>
                ))}
            </div>
        </div>
    )
}

export default Contributers
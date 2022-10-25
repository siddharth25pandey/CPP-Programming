import './App.css';
import {BrowserRouter as Router, Switch, Route} from 'react-router-dom'
import Navbar from './components/Navbar/Navbar';
import About from './components/About/About';
import Contactus from './components/Contact/Contactus';
import Home from './components/Home/Home';
import Contributers from './components/Contributors/Contributors';

function App(){
  return (
    <Router>
      <div>
        <Navbar />
        <Switch>
          <Route exact path="/" component={Home} />
          <Route path="/about" component={About} />
          <Route path="/contributors" component={Contributers} />
          <Route path="/contact-us" component={Contactus} />
        </Switch>
      </div>
    </Router>
    
  );
}

export default App;

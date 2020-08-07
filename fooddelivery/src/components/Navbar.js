import React, { Component } from 'react';
import logIn from './logIn';
import SignUp from './SignUp';
import cart from './cart';
import Restaurants from './Restaurants';
import {
    BrowserRouter as Router,
    Route,
    NavLink 
} from 'react-router-dom';
import viewRestaurantItems from './viewRestaurantItems';

class Navbar extends Component {

    render() {
        return (
            <Router>
                    <nav className="navbar navbar-expand-lg navbar-dark bg-primary">
                        <NavLink className="navbar-brand" to="/" activeClassName="active">Taste At Home</NavLink>                        
                        <button className="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarColor01" aria-controls="navbarColor01" aria-expanded="false" aria-label="Toggle navigation">
                            <span className="navbar-toggler-icon"></span>
                        </button>

                        <div className="collapse navbar-collapse" id="navbarColor01">
                            <ul className="navbar-nav mr-auto">
                                <li className="nav-item">
                                    <NavLink className="nav-link" to="/logIn" activeClassName="active"> <span><i className="fas fa-sign-in-alt"></i></span> logIn</NavLink>
                                </li>
                                <li className="nav-item">
                                    <NavLink className="nav-link" to="/SignUp" activeClassName="active"> <span><i className="fas fa-user-plus"></i></span> signUp</NavLink>
                                </li>
                                <li className="nav-item">
                                    <NavLink className="nav-link" to="/Restaurants" activeClassName="active"> <span><i className="fas fa-utensils"></i></span> Restaurants</NavLink>
                                </li>
                                <li className="nav-item">
                                    <NavLink className="nav-link" to="/cart" activeClassName="active"> <span><i className="fas fa-shopping-cart"></i></span> cart</NavLink>
                                </li>


                            </ul>
                        </div>
                    </nav>
                    <Route exact path="/logIn" component={logIn} />
                    <Route exact path="/SignUp" component={SignUp} />
                    <Route exact path="/cart" component={cart}/>
                    <Route exact path="/" component={Restaurants} />
                    
                    <Route exact path="/Restaurants" component={Restaurants} />
                    <Route exact path="/viewMenu/:restaurantId" component={viewRestaurantItems}/>
            </Router>
             );
    }
}

export default Navbar;
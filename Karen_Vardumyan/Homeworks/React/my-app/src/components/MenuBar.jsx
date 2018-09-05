import React, { Component } from 'react';
import '../styles/MenuBar.css';
import { Navbar, NavItem, Nav} from 'react-bootstrap';
import Chef from '../assets/utensils.svg';

class MenuBar extends Component {
    constructor(...props) {
        super(...props);
        this.state = {
            active : this.props.active
        };
        
        console.log(this.props);
        this.handleSelect = this.handleSelect.bind(this);
    }
   
    handleSelect = (e) => { console.log(e);} 


    render() {
        
        const divStyle = {
            height: '30px',
        };
        const imgStyle = {
        };

        const menuList = ['HOME', 'CURRENT CONSULTANT', 'PAYMENT', 'PAYMENT HISTORY', 'ABOUT', 'PROFILE'];
        const menuItems = menuList.map((menuItem,index) => {
                console.log(index++)
                return  <NavItem onSelect={this.handleSelect} eventKey={index} href="#">
                            {menuItem}   
                        </NavItem>
        });
        return (
            <div>
                <div style={divStyle}></div>
                <Navbar collapseOnSelect>
                <Navbar.Header>
                    <Navbar.Brand style={divStyle} >
                    <a href="#brand"><b>Cook</b>Master<img src={Chef} alt="Chef" height="15px" width="15px" style={imgStyle}/></a>
                    </Navbar.Brand>
                    <Navbar.Toggle />
                </Navbar.Header>
                <Navbar.Collapse>
                    <Nav pullRight>
                    {menuItems}
                    </Nav>
                </Navbar.Collapse>
                </Navbar>;
            </div>   
        );
    }
}

export default MenuBar;
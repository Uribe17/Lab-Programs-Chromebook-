**Object-Oriented Design Concepts**

- Encapsulation/Abstraction:
  - Combine data/operations on that data into a single unit & only expose a desired public interface & precent modification/alterations of the implementation.
-  Inheritance:
  -  Creating new objects from existing ones to specify functional relationships & extend behavior.
-  Polymorphism:
  -  Using the same expression to support different types with different behavioir for each type.
- 

**Coupling**

- Coupling refers to how much components depend on each other's implementation details
  - Placing a new battery in your car vs. a new engine
  - Adding a USB device vs. a new video adapter.
- Design seeks to reduce coupling as much as possible by:
  - Creating a well-defined interfaces to update or access the state of an object allow alternate implementations that do NOT require interface changes.
- 



**Inheritance**

- A way of defining interfaces, re-using classes/extendinf original functionality

- Inheritance is a mechanism for enchancing existing working classes.
  
- If a new class needs to be implemented & a class representing a more general concept is already available, then the new class can _inherit_ from the existing class.
  
- The existing, more general class is called base class.
  
- In the derived class definition, you specify only new member functions and data function.
- Defines an "is-a" relationship:


**Constructors**

- A derived class will auto-call its Base class constructor BEFORE  

**Destructors**

-

**Public, Private, Protected Inheritance/Access**

  - **Inheritance members**

**Overloading Base Functions**

- A derived class may want to redefine the behavior od a member function of the base class
- A base member funnction
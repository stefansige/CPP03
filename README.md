Exercise 00: Create a ClapTrap class with private attributes for name, hit points, energy points, and attack damage. Implement member functions to attack, take damage, and be repaired, each printing a descriptive message. Ensure constructors and destructor also display messages.

Exercise 01: Extend the ClapTrap class with a derived class named ScavTrap. Inherit constructors and destructor from ClapTrap, but print different messages. Initialize attributes with specific values and add a special capacity function, guardGate(), unique to ScavTrap.

Exercise 02: Create another derived class, FragTrap, inheriting from ClapTrap. Implement specific constructor/destructor messages, initialize attributes differently, and add a special function, highFivesGuys().

Exercise 03: Develop a DiamondTrap class inheriting from both FragTrap and ScavTrap. Use the name attribute from ClapTrap, and attributes/functions from both parent classes. Add a unique function, whoAmI(), to display both the DiamondTrap's name and ClapTrap's name. Ensure the ClapTrap subobject is created only once.


//Cloneable is already present in java upper Classses
public class Cart implements Cloneable
{
	public String itemName;
	public int itemCost;
	public int quantity;


	public ShoppingCartItem(String itemName, int itemCost, int quantity)
	{
		this.itemName = itemName;
		this.itemCost = itemCost;
		this.quantity = quantity;
		
	}
// Function to add items inin Cart
	public void add(ShoppingCartItem otherItem)
	{
		this.quantity = this.quantity + otherItem.quantity;
	}
//Function to remove items from cart, subtract method is similar to the add method 

	public void subtract(ShoppingCartItem otherItem)
	{
		this.quantity = this.quantity - otherItem.quantity;
	}

// You can store items in a hash table if you implement hashCode. 

	public int hashCode()
	{
		return itemName.hashCode() + itemCost;
	}

// It willl check that the product is already in the cart

	public boolean equals(Object other)
	{
		if (this == other) return true;

		if (!(other instanceof ShoppingCartItem))
			return false;

		ShoppingCartItem otherItem =  (ShoppingCartItem) other;

		return (itemName.equals(otherItem.itemName)) &&	(itemCost == otherItem.itemCost);
	}

// Create a copy of this object

	public ShoppingCartItem copy()
	{
		return new ShoppingCartItem(itemName, itemCost,	quantity);
	}

// Create a printable version of this object , Displaying purpose

	public String toString()
	{
		return itemName+" cost: "+itemCost+" qty: "+quantity+" desc: ";
	}
}

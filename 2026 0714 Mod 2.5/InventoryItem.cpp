#include "InventoryItem.h"



InventoryItem::InventoryItem() {
	
}

void InventoryItem::changeParts(vector<string> moreParts) {
	int count = 0;
	for (string part : parts) {
		part = moreParts[count];
		count++;
	}
}

string* InventoryItem::getParts() {
	return parts;
}
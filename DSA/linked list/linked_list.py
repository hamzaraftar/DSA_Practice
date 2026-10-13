
class Node:

    def get_data(self):
        return self.data

    def set_data(self, data):
        self.data = data

    def get_next(self):
        return self.next_node

    def set_next(self, next_node):
        self.next_node = next_node


class LinkedList:
    def __init__(self):
        self.head = None

    def create(self):
        choice = 1
        temp = None

        while choice:
            data = int(input("Enter data: "))

            newNode = Node()
            newNode.set_data(data)
            newNode.set_next(None)

            if self.head is None:
                self.head = newNode
                temp = newNode
            else:
                temp.set_next(newNode)
                temp = newNode

            choice = int(input("Do you want to continue? (1/0): "))

    def display(self):
        temp = self.head

        while temp is not None:
            print(temp.get_data(), end=" -> ")
            temp = temp.get_next()

        print("None")


ll = LinkedList()
ll.create()
ll.display()

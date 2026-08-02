class DynamicArray {
   private:
    int* arr;
    int size;
    int capacity;

   public:
    DynamicArray(int capacity) {
        this->size = 0;
        if (capacity > 0) {
            this->capacity = capacity;
            this->arr = new int[capacity];
        }
    }

    int get(int i) { return this->arr[i]; }

    void set(int i, int n) { this->arr[i] = n; }

    void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        this->arr[size] = n;
        this->size++;
    }

    int popback() {

        this->size--;
        return this->arr[size];
    }

    void resize() {
        this->capacity *= 2;
        int* new_arr = new int[this->capacity];
        for (int i = 0; i < this->size; i++) {
            new_arr[i] = this->arr[i];
        }
        delete[] this->arr;
        this->arr = new_arr;
    }

    int getSize() { return this->size; }

    int getCapacity() { return this->capacity; }
};

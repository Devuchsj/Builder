#include <iostream>
#include <string>

using namespace std;

class Hotel {
    private:
        int id;
        string name;
        string type;
        int staff_size;
        int room_size;
        int establish_year;
        string address;
        string rating_type;
        string website;

    public:
        void setId(int id) {
            this->id = id;
        }

        int getId() {
            return this->id;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }

        void setType(string type) {
            this->type = type;
        }

        string getType() {
            return this->type;
        }

        void setStaffSize(int staff_size) {
            this->staff_size = staff_size;
        }

        int getStaffSize() {
            return this->staff_size;
        }

        void setRoomSize(int room_size) {
            this->room_size = room_size;
        }

        int getRoomSize() {
            return this->room_size;
        }

        void setEstablishYear(int establish_year) {
            this->establish_year = establish_year;
        }

        int getEstablishYear() {
            return this->establish_year;
        }

        void setAddress(string address) {
            this->address = address;
        }

        string getAddress() {
            return this->address;
        }

        void setRatingType(string rating_type) {
            this->rating_type = rating_type;
        }

        string getRatingType() {
            return this->rating_type;
        }

        void setWebsite(string website) {
            this->website = website;
        }

        string getWebsite() {
            return this->website;
        }
};

int main() {
    Hotel hotel;

    hotel.setId(1001);
    hotel.setName("The Grand Hotel");
    hotel.setType("5 Star");
    hotel.setStaffSize(200);
    hotel.setRoomSize(500);
    hotel.setEstablishYear(1980);
    hotel.setAddress("123 Main St, Anytown USA");
    hotel.setRatingType("AAA");
    hotel.setWebsite("www.thegrandhotel.com");

    cout << "Hotel Details:" << endl;
    cout << "ID: " << hotel.getId() << endl;
    cout << "Name: " << hotel.getName() << endl;
    cout << "Type: " << hotel.getType() << endl;
    cout << "Staff Size: " << hotel.getStaffSize() << endl;
    cout << "Room Size: " << hotel.getRoomSize() << endl;
    cout << "Established: " << hotel.getEstablishYear() << endl;
    cout << "Address: " << hotel.getAddress() << endl;
    cout << "Rating Type: " << hotel.getRatingType() << endl;
    cout << "Website: " << hotel.getWebsite() << endl;

    return 0;
}

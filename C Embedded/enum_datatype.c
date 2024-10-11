#include <stdio.h>

// Định nghĩa một kiểu enum cho các mùa
enum season {
    Spring,  // Mặc định Spring sẽ có giá trị là 0
    Summer,  // Summer sẽ có giá trị là 1
    Autumn,  // Autumn sẽ có giá trị là 2
    Winter   // Winter sẽ có giá trị là 3
};

void printSeason(enum season currentSeason) {
    // Sử dụng switch để in ra mùa hiện tại
    switch (currentSeason) {
        case Spring:
            printf("It's Spring! Flowers are blooming.\n");
            break;
        case Summer:
            printf("It's Summer! Time to go to the beach.\n");
            break;
        case Autumn:
            printf("It's Autumn! Leaves are falling.\n");
            break;
        case Winter:
            printf("It's Winter! Time for snow.\n");
            break;
        default:
            printf("Unknown season!\n");
    }
}

int main() {
    // Khai báo một biến enum kiểu season
    enum season currentSeason;

    // Gán giá trị mùa hiện tại là Autumn (2)
    currentSeason = Autumn;

    // In ra thông điệp cho mùa hiện tại
    printSeason(currentSeason);

    // Thử thay đổi mùa thành Winter và in lại
    currentSeason = Winter;
    printSeason(currentSeason);

    return 0;
}

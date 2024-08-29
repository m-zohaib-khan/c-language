#include <stdio.h>
#include <string.h>

// these are constant/ define by user
#define MAX_ROOMS 10
#define ROOM_CAPACITY 3
#define HOSTEL_DUES 6000
#define LAUNDRY_DUES 1000
#define MESS_DUES 5000
#define PICK_DROP_DUES 4000

typedef struct 
{
    char name[50];
    int roomNumber;
    int usesLaundry;
    int usesMess;
    int usesPickDrop;
    int totalDues;
} Student;

typedef struct
 {
    Student students[ROOM_CAPACITY];
    
    int studentCount;
} Room;

Room hostel[MAX_ROOMS];

// initialization of the hostel data is zero
void initializeHostel()
 {
    for (int i = 0; i < MAX_ROOMS; i++)
    
	 {
        hostel[i].studentCount = 0;
    }
}

void calculateDues(Student *student) 
{
    student->totalDues = HOSTEL_DUES;
    
    if (student->usesLaundry)
	 {
        student->totalDues += LAUNDRY_DUES;
    }
    if (student->usesMess) 
	{
    	
        student->totalDues += MESS_DUES;
    }
     if (student->usesPickDrop) 
   {
        student->totalDues += PICK_DROP_DUES; 
    }
}
//  this file write the data in the file in binary mode

void saveHostelData()
 {
	
    FILE *file = fopen("hostel_data.bin", "w");
    
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < MAX_ROOMS; i++)
	 {
	 	
        fwrite(&hostel[i].studentCount, sizeof(int), 1, file);
        
        fwrite(hostel[i].students, sizeof(Student), hostel[i].studentCount, file);
    }
//    printf("\n");

    fclose(file);
}
// this file read the data from the program

void loadHostelData() 
{
	
    FILE *file = fopen("hostel_data.bin", "rb");
    
    if (file == NULL) {
        printf("No existing data file found. Starting fresh.\n");
        return;
    }

    for (int i = 0; i < MAX_ROOMS; i++) {
        fread(&hostel[i].studentCount, sizeof(int), 1, file);
        
        fread(hostel[i].students, sizeof(Student), hostel[i].studentCount, file);
    }

    fclose(file);
}
// added the student in the hostel/their record
void addStudent()
 {
    char name[50];
    int roomNumber, laundry, mess,pickDrop;

    printf("Enter student's name: ");
    scanf("%s", name);
//     gets(name);

    printf("Enter room number (0 to 9): ");
    scanf("%d", &roomNumber);
    
    if (roomNumber < 0 || roomNumber >= MAX_ROOMS) 
	{
    	
        printf("Invalid room number.\n");

        return;
    }

    if (hostel[roomNumber].studentCount >= ROOM_CAPACITY)
	 {
    	
        printf("Sorry, this room is full. Choose another one.\n");
        return;
    }

    printf("Use laundry service? (1 for Yes, 0 for No): ");
    scanf("%d", &laundry);

    printf("Use mess service? (1 for Yes, 0 for No): ");
    scanf("%d", &mess);
    
    printf("Use pick and drop service? (1 for Yes, 0 for No): ");
    scanf("%d", &pickDrop);


    Student student;
    strcpy(student.name, name);
    student.roomNumber = roomNumber;
    student.usesLaundry = laundry;
    student.usesMess = mess;
    student.usesPickDrop = pickDrop;

    calculateDues(&student);

    hostel[roomNumber].students[hostel[roomNumber].studentCount++] = student;
    saveHostelData();

    printf("Student added successfully with total dues: %d\n", student.totalDues);
}
// change the student room;

void changeRoom() 
{
	
    char name[50];
    int newRoomNumber;

    printf("Enter student's name: ");
    scanf("%s", name);
//     gets(name);

    printf("Enter new room number (0 to 9): ");
    scanf("%d", &newRoomNumber);

    if (newRoomNumber < 0 || newRoomNumber >= MAX_ROOMS) 
	{
    	
        printf("Invalid room number.\n");
        return;
    }

    if (hostel[newRoomNumber].studentCount >= ROOM_CAPACITY) 
	{
    	
        printf("Sorry, this room is full. Choose another one.\n");
        return;
    }

    int found = 0;
    for (int i = 0; i < MAX_ROOMS; i++)
	 {
    	
        for (int j = 0; j < hostel[i].studentCount; j++)
		 {
        	
            if (strcmp(hostel[i].students[j].name, name) == 0)
			 {
            	
                hostel[newRoomNumber].students[hostel[newRoomNumber].studentCount++] = hostel[i].students[j];

                // Remove the student from the old room
                for (int k = j; k < hostel[i].studentCount - 1; k++) 
				{
                	
                    hostel[i].students[k] = hostel[i].students[k + 1];
                }
                hostel[i].studentCount--;

                saveHostelData();

                printf("Room changed successfully.\n");
                found = 1;
                break;
            }
        }
        if (found)
		 {
        	
            break;
        }
    }

    if (!found)
	 {
        printf("Student not found.\n");
    }
}
// this function is to remove the student record
void removeStudent()
 {
 	
    char name[50];

    printf("Enter student's name: ");
    scanf("%s", name);
//     gets(name);

    int found = 0;
    for (int i = 0; i < MAX_ROOMS; i++) 
	{
        for (int j = 0; j < hostel[i].studentCount; j++) 
		{
        	
            if (strcmp(hostel[i].students[j].name, name) == 0) 
			{
            	
                // Remove the student by shifting elements
                for (int k = j; k < hostel[i].studentCount - 1; k++)
				 {
                	
                    hostel[i].students[k] = hostel[i].students[k + 1];
                }
                hostel[i].studentCount--;

                saveHostelData();

                printf("Student removed successfully.\n");
                found = 1;
                break;
            }
        }
        if (found)
		 {
        	
            break;
        }
    }

    if (!found) 
	{
    	
        printf("Student not found.\n");
    }
}
// dispaly hostel record

void displayHostelRecords()
 {
	
    printf("\nHostel Records:\n");
    for (int i = 0; i < MAX_ROOMS; i++) 
	{
    	    	
        printf("Room %d:\n", i);
        if (hostel[i].studentCount == 0) 
		{
        	
            printf("  No students in this room.\n");
        } 
		else 
		{
        	
           for (int j = 0; j < hostel[i].studentCount; j++)
			 {
            	
                printf("  Name: %s\n", hostel[i].students[j].name);
                printf("  Room Number: %d\n", hostel[i].students[j].roomNumber);
                printf("  Laundry Service: %s\n", (hostel[i].students[j].usesLaundry ? "Yes" : "No"));
                printf("  Mess Service: %s\n", (hostel[i].students[j].usesMess ? "Yes" : "No"));
                 printf("  Pick & Drop Service: %s\n", (hostel[i].students[j].usesPickDrop ? "Yes" : "No"));
                printf("  Total Dues: %d\n", hostel[i].students[j].totalDues);
                printf("\n");
            }
        }
    }
}

int main() 
{
	
    int choice;
    initializeHostel();
    loadHostelData();
    
    	printf("******************************************************\n");
        printf("******************************************************\n");
        printf("*************|HOSTEL MANAGEMENT SYSTEM |**************\n");
        printf("******************************************************\n");
        printf("******************************************************\n");

    do
	
	 {
    
        
        printf("1. Add Student\n");
        printf("2. Change Room\n");
        printf("3. Remove Student\n");
        printf("4. Display Hostel Records\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
        	
            case 1:
            	
                addStudent();
                break;
            case 2:
            	
                changeRoom();
                break;
            case 3:
            	
                removeStudent();
                break;
            case 4:
            	
                displayHostelRecords();
                break;
            case 5:
            	
                printf("Exiting...\n");
                break;
            default:
            	
                printf("Invalid choice. Try again.\n");
        }
        
    } 
	while (choice != 5);

    return 0;
}

#include "UI.h"
#include <iostream>
using namespace std;

UI::UI()// : AutoController() {}
{
	ctrl = AutoController:: ret_instanta();
}

UI::~UI() {
	delete ctrl;
}


void UI::meniu()
{
	cout << endl;
	cout << "0.Exit\n";
	cout << "1.Find auto by Id\n";
	cout << "2.Find all autos\n";
	cout << "3.Save auto\n";
	cout << "4.Update Auto\n";
	cout << "5.Delete Auto\n";
	cout << endl;
}

void UI::optiuni()
{
//	AutoController ctrl;
//	AutoInMemoryRepository repo;

	while (true) 
	{
		meniu(); 
		//repo.add_autos();
		//ctrl->adding_autos();
		//cout<<repo.size_autos()<<endl;

		cout << "Choose an option:\n";
		int opt;
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			int id;
			cout << "Enter id for the searched auto\n";
			cin >> id;
			Auto* r = ctrl->findAutoById(id);
			if (r == nullptr)
			{
				cout << "Keinen Auto mit diesem id\n";
				break;
			}
			cout<<r->toString();
			break;
		}
		case 2:
		{
			vector<Auto*> v = ctrl->findAll2();
			for (int i = 0; i < v.size(); i++)
				cout << v[i]->toString() << endl;
			break;
		}
		case 3:
		{
			cout << "Adding a new auto\n";
			cout << "Enter id:\n";
			int id;
			cin >> id;
			cout << "Enter Marke:\n";
			string marke;
			cin >> marke;
			cout << "Enter Modell:\n";
			string modell;
			cin >> modell;
			Auto* newAuto = new Auto (id, marke, modell);
			if (ctrl->saveAuto(newAuto) == nullptr)
				cout << "Couldn't save auto";
			break;
		}
		case 4:
		{
			cout << "Updating an auto\n";
			cout << "Enter id of the updated auto:\n";
			int id;
			cin >> id;
			cout << "Enter Marke of the updated auto:\n";
			string marke;
			cin >> marke;
			cout << "Enter Modell of the updated auto:\n";
			string modell;
			cin >> modell;
			Auto* updatedAuto = new Auto( id,marke,modell );
			if (ctrl->updateAuto(updatedAuto) != nullptr)
				cout << "Couldn't update\n";
			break;
		}
		case 5:
		{
			cout << "Deleting an auto\n";
			cout << "Enter id of the auto to be deleted\n";
			int id;
			cin >> id;
			if (ctrl->deleteAuto(id) == nullptr)
				cout << "Couldn't delete\n";
			break;
		}

		case 0:
			return;
		}
	}

}

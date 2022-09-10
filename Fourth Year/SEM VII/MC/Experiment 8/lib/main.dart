import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    final appTitle = 'College Admission Details';
    return MaterialApp(
      title: appTitle,
      home: Scaffold(
        appBar: AppBar(
          title: Text(appTitle),
        ),
        body: MyCustomForm(),
      ),
    );
  }
}

// Create a Form widget.
class MyCustomForm extends StatefulWidget {
  @override
  MyCustomFormState createState() {
    return MyCustomFormState();
  }
}

// Create a corresponding State class, which holds data related to the form.
class MyCustomFormState extends State<MyCustomForm> {
  // Create a global key that uniquely identifies the Form widget
  // and allows validation of the form.
  final _formKey = GlobalKey<FormState>();

  @override
  Widget build(BuildContext context) {
    // Build a Form widget using the _formKey created above.
    return Form(
      key: _formKey,
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: <Widget>[
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.person),
              hintText: 'Enter your name',
              labelText: 'Name',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.phone),
              hintText: 'Enter a phone number',
              labelText: 'Phone',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.calendar_today),
              hintText: 'Enter your date of birth',
              labelText: 'Dob',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.home),
              hintText: 'Enter your address',
              labelText: 'Address',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.email),
              hintText: 'Enter your mail address',
              labelText: 'Email',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.account_balance_rounded),
              hintText: 'Enter your Qualifying Degee/Course',
              labelText: 'Qualifying Degree / Course',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          TextFormField(
            decoration: const InputDecoration(
              icon: const Icon(Icons.book),
              hintText: 'Enter your % Marks',
              labelText: 'Percent Marks',
            ),
            validator: (value) {
              if (value != null && value.isEmpty) {
                return 'Please enter some text';
              } else {
                print(value);
              }
              return null;
            },
          ),
          new Container(
              padding: const EdgeInsets.only(left: 150.0, top: 40.0),
              child: new RaisedButton(
                child: const Text('Submit'),
                onPressed: () {
                  // It returns true if the form is valid, otherwise returns false
                  if (_formKey.currentState!.validate()) {
                    // If the form is valid, display a Snackbar.
                    Scaffold.of(context).showSnackBar(
                        SnackBar(content: Text('Data is in processing.')));
                  }
                },
              )),
        ],
      ),
    );
  }
}

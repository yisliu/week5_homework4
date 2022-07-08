#include <iostream>
#include <string>
using namespace std;

//input a number between 1 and 100 for first line, make some string called s and see how many time it appears in the amount the user says in the first line?

int main() {
  //make variable
  string s; 
  int counter=0;
  int len;
  int n;
  // todo, you need to initialize array after you know the number of input lines.
  // todo, no meaning to have two arrays. 
  cin>>n;
  string a[101];
  //cin>>s;
  /*
    # step 1: I need to get the number of input lines.
    cin >> n 

    # step 2: I need to create array for inputing strings. 
    # step 3: loop for n input strings and save into array.
    for (i =0; i < n; i++ ) {5
       # step 3: I need to accept input line and save into array.
       string tmp = ""
       cin >> tmp;
       s_arr[i] = tmp;
    }
    # or step3: try to use the library function.
    getline(cin, s_arr);

    # step 4: I need to get the search string.
    string s_target;
    cin >> s_target;

    # step 5: loop the string array and sum the amount of target string.
    for(int i = 0; i < n; i++) {
        string s_source = s_arr[i];

        # step 6: search how many times the target string appears in the source string
        # for now, I will do research from teacher's video or from online; then, I need to figure out which approach is the right way to do; in addition, I also need to consider O(n) & s(n). for example, check out https://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
    }
  */

  
  //line reacts
  //to-do: make loop work correctly
  getline(cin,s);
  for(int i = 0; i<=n-1; i++){
    //works
    //dosen't make difference
    getline(cin, a[i]);
    // cin>>a[i];
  }
  //works
  cin>>s;
  // cout<<s;
  len = s.length();
  // todo, you cannot start from 1 on array because the array indet starts from zero. Otherwise, you miss the first one and compare some unexisting string.
  for(int i = 0; i<=n; i++){
    //entire loop not working
    for(int j = 0; j<a[i].length(); j++){
      // cout<<"WORK?";
      //loop does not run
      // todo, you should compare string in the right way, the current way is for comparing address but not string value.
      if(a[i].substr(j,len)==s){
        counter++;
        // todo, no idea why j+=2;
        // j+=2;
        // cout<<counter;
      }
      //does not work as well
      // else{
      //   // todo, you don't need this else block.
      //   cout<<"LOL";
      //   continue;
      // }
    }
  }
  cout<<counter;
}
//l lol 35tang.
// l lol C++
// l do not like lolol
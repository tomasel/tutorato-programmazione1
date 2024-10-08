#include "Graph.h"

void init(graph &g, int number_of_nodes) {
  g.number_of_nodes = number_of_nodes;
  g.adjMatrix = new int *[number_of_nodes];
  for (int i = 0; i < number_of_nodes; i++) {
    g.adjMatrix[i] = new int[number_of_nodes];
    for (int j = 0; j < number_of_nodes; j++) {
      g.adjMatrix[i][j] = 0;
    }
  }
}

void fill_graph(graph &g, const char *file_path) {
  fstream in;
  in.open(file_path, ios::in);
  if (in.fail()) {
    cerr << "File does not exists" << endl;
    exit(1);
  }
  int number_nodes;
  in >> number_nodes;

  init(g, number_nodes);

  int node1, node2;
  while (in >> node1 >> node2) {
    g.adjMatrix[node1][node2] = 1;
  }
  in.close();
}

void print_graph(graph &g) {
  for (int i = 0; i < g.number_of_nodes; i++) {
    cout << i << " -> [";
    for (int j = 0; j < g.number_of_nodes; j++) {
      if (g.adjMatrix[i][j]) {
        cout << j << ", ";
      }
    }
    cout << "]" << endl;
  }
}

void dealloc(graph &g) {
  for (int i = 0; i < g.number_of_nodes; i++) {
    delete[] g.adjMatrix[i];
  }
  delete[] g.adjMatrix;
}

void init(set &s) { s.arrayList = new int[s.buffer_length]; }

void dealloc(set &s) { delete[] s.arrayList; }

bool empty(set &s) { return s.current_size == 0; }

bool full(set &s) { return s.current_size == s.buffer_length; }

int find_index(set &s, const int value) {
  int index = 0;
  while (s.arrayList[index] < value && index < s.current_size) {
    index++;
  }
  return index;
}

void expand(set &s) {
  cout << "\nExpanding set" << endl;
  int *new_array_list = new int[(int)(s.buffer_length * s.EXPANSION_FACTOR)];
  for (int i = 0; i < s.current_size; i++) {
    new_array_list[i] = s.arrayList[i];
  }
  delete[] s.arrayList;
  s.arrayList = new_array_list;
  s.buffer_length = (int)(s.buffer_length * s.EXPANSION_FACTOR);
}

void shrink(set &s) {
  cout << "\nShrinking set" << endl;
  int *new_array_list = new int[(int)(s.buffer_length / 2)];
  for (int i = 0; i < s.current_size; i++) {
    new_array_list[i] = s.arrayList[i];
  }
  delete[] s.arrayList;
  s.arrayList = new_array_list;
  s.buffer_length = (int)(s.buffer_length / 2);
}

void insert(set &s, int value) {
  if (empty(s)) {
    s.arrayList[0] = value;
    s.current_size++;
  } else {
    if (!contains(s, value)) {
      if (full(s)) {
        expand(s);
      }
      int index = find_index(s, value);
      s.current_size++;
      for (int i = s.current_size; i > index; i--) {
        s.arrayList[i] = s.arrayList[i - 1];
      }
      s.arrayList[index] = value;
    }
  }
}

void remove_element(set &s, int value) {
  if (contains(s, value)) {
    int index = find_index(s, value);
    s.current_size--;
    for (int i = index; i < s.current_size; i++) {
      s.arrayList[i] = s.arrayList[i + 1];
    }
    if ((float)s.current_size / s.buffer_length < s.LOAD) {
      shrink(s);
    }
  }
}

bool binary_search(set &s, const int value, int sx, int dx) {
  bool retval = false;
  if (sx > dx) {
    retval = false;
  } else {
    int mid = (sx + dx) / 2;
    if (s.arrayList[mid] == value) {
      retval = true;
    } else {
      if (value > s.arrayList[mid]) {
        retval = binary_search(s, value, mid + 1, dx);
      } else {
        retval = binary_search(s, value, sx, mid - 1);
      }
    }
  }
  return retval;
}

bool contains(set &s, int value) {
  bool retval = false;
  if (!empty(s)) {
    retval = binary_search(s, value, 0, s.current_size);
  }
  return retval;
}

void print_set(set &s) {
  cout << "\nMax length: " << s.buffer_length << endl;
  cout << "Current length: " << s.current_size << endl;
  cout << "Values: [";
  for (int i = 0; i < s.current_size; i++) {
    cout << s.arrayList[i] << ", ";
  }
  cout << "]" << endl;
}

void dependences(graph &g, int node) {
  set s;
  init(s);
  stack<int> st;
  st.push(node);
  while (!st.empty()) {
    int curr_node = st.top();
    st.pop();
    if (!contains(s, curr_node)) {
      for (int i = 0; i < g.number_of_nodes; i++) {
        if (g.adjMatrix[i][curr_node] && !contains(s, i)) {
          st.push(i);
        }
      }
    }
    insert(s, curr_node);
  }
  remove_element(s, node);
  cout << "Dependencies set:";
  print_set(s);
}

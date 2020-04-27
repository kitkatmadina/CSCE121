//Assignment 5 problem 3
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Player;
enum Player_state { Connected, Disconnected, Ready, Not_ready };
class Lobby {
private:
	int lobby_id;
	int lobby_max;
	int lobby_min;
public:
	Lobby(int new_lid, int new_min, int new_max);//constructor
	int get_id() { return lobby_id; }
	int get_max() { return lobby_max; }
	int get_min() { return lobby_min; }
	vector<Player> players_list;
	bool check_if_all_players_ready();
	bool check_if_ready_to_start_game(Player&);
	void start_game();
	void join_game(Player&);
	void leave_game(Player&);
};

class Player {
private: 
	int player_id;
	int lobby_id;
public:
	Player_state player_state = Disconnected;
	Player(int new_id) : player_id{ new_id }, lobby_id{ -1 } {} //constructor
	int get_pid() { return player_id; }
	void ready_player(Player& n);
	void unready_player(Player& n);
	void connect_to_lobby(Player& n, Lobby m);
	void disconnect_from_lobby(Player& n, Lobby m);
	friend bool operator ==(Player& n, Player& m) {
		if (n.player_id == m.player_id && n.lobby_id == m.lobby_id)
			return true;
	}
	friend bool operator != (Player& n, Player& m) {
		if (n.player_id != m.player_id || n.lobby_id != m.lobby_id)
			return true;
	}
	
};


Lobby::Lobby(int new_id, int new_min, int new_max) : lobby_id{ new_id }, lobby_max{ new_max }, lobby_min{ new_min } {}
bool Lobby::check_if_all_players_ready() {
	for (int i = 0; i < players_list.size(); i++) {
		if (players_list[i].player_state != Ready) {
			return false;
			break;
		}
		else
			return true;
	}
}
bool Lobby::check_if_ready_to_start_game(Player& n) {
	if (n.player_state == Ready)
		return true;
	else
		return false;
}
void Lobby::join_game(Player& n) {
	players_list.push_back(n);
	n.ready_player(n);
}
void Lobby::leave_game(Player& n) {
	int pos;
	for (int i = 0; i < players_list.size(); i++) {
		if (n== players_list[i])
			pos = i;
		players_list.erase(players_list.begin() + pos-1);
	}
	cout << "Left game.\n";
}
void Lobby::start_game() {
	cout << "Game Started.\n";
}
void Player::connect_to_lobby(Player& n,Lobby m){
	n.lobby_id = m.get_id();
	n.player_state = Connected;
	m.join_game(n);
}
void Player :: disconnect_from_lobby(Player& n, Lobby m) {
	n.lobby_id = -1;
	n.player_state = Disconnected;
	m.leave_game(n);
}

void Player::ready_player(Player& n) {
	if (n.player_state == Connected)
		n.player_state = Ready;
}
void Player::unready_player(Player& n) {
	n.player_state = Not_ready;
}

void enum_to_string(Player_state m) {
	if (m == Connected) { cout<<"Connected\n"; }
	else if (m == Disconnected) { cout << "Disconnected\n"; }
	else if (m == Ready) {
		cout << "Ready\n";
	}
	else if (m == Not_ready) { cout << "Not Ready\n"; }
}

int main() { 
	Lobby l1(1, 3, 5);
	Player p1(1);
	Player p2(2);
	Player p3(3);
	enum_to_string(p1.player_state);
	enum_to_string(p2.player_state);
	enum_to_string(p3.player_state);
	p1.connect_to_lobby(p1,l1);
	p2.connect_to_lobby(p2,l1);
	p3.connect_to_lobby(p3,l1);
	if (l1.check_if_all_players_ready()==true)
		l1.start_game();
	enum_to_string(p1.player_state);
	enum_to_string(p2.player_state);
	enum_to_string(p3.player_state);
	p1.disconnect_from_lobby(p1, l1);
	p2.disconnect_from_lobby(p2, l1);
	p3.disconnect_from_lobby(p3, l1);
	enum_to_string(p1.player_state);
	enum_to_string(p2.player_state);
	enum_to_string(p3.player_state);
	return 0;
}
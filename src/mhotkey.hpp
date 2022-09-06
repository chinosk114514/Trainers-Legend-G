#pragma once

namespace MHotkey {
	bool get_use_local_url();
	void set_use_local_url();
	void SetKeyCallBack(std::function<void(int, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD)> callbackfun);
	bool get_uma_stat();
	void set_uma_stat(bool s);
	int start_hotkey(char sethotk = 'u');
	void setExtPluginPath(std::string ppath);
	void setUmaCommandLine(std::string args);
	void setTlgPort(int port);
	void fopenExternalPlugin(int tlgPort);
	void closeExternalPlugin();
}

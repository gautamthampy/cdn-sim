//
// Created by Gautam Santhanu Thampy on 04.12.2023.
//

#ifndef CDN_NODE_THREAD_H
#define CDN_NODE_THREAD_H

#include <csignal>
#include <unistd.h>
#include <memory>
#include "../SyncThread/SyncThread.h"

class Thread {
private: int id;
private: const int sd;
public: Thread(int id, int sd) : id(id), sd(sd) {}
public: void Execute();

};


#endif //CDN_NODE_THREAD_H

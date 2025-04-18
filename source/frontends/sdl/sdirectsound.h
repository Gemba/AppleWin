#pragma once

#include <vector>

namespace sa2
{

  struct SoundInfo
  {
    bool running = false;
    int channels = 0;

    // in seconds
    // float to work with ImGui.
    float buffer = 0.0;
    float queue = 0.0;
    float size = 0.0;
    float volume = 0.0;
  };

  void stopAudio();
  void writeAudio();
  void printAudioInfo();
  std::vector<SoundInfo> getAudioInfo();
}

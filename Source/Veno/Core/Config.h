//
// Created by versustune on 01.03.20.
//

#ifndef VENO_CONFIG_H
#define VENO_CONFIG_H

#include "JuceHeader.h"
#include "../GUI/LookAndFeel/LookHandler.h"
#include "../GUI/Theme/Theme.h"
#include <memory>

class Config {
private:
    std::shared_ptr<PropertiesFile> config = nullptr;
    std::shared_ptr<Theme> theme = nullptr;
    static std::shared_ptr<Config> instance;
    int currentLook = 0; //nah move the bitch logic from current to next
    std::unordered_map<std::string, AudioProcessorEditor *> editors;
public:
    static std::shared_ptr<Config> getInstance() {
        if (!instance)
            instance = std::make_shared<Config>();
        return instance;
    }

    void saveAll();

    int getCurrentLook();

    void setColourForIndex(Colour *colour, ThemeColour index);

    std::shared_ptr<Theme> getCurrentTheme();

    double getScale();

    // can be public but doesnt need!
    Config();

    ~Config();

    void registerEditor(AudioProcessorEditor *editor, const std::string& name);

    void removeEditor(const std::string& name);

    int getEditorCount();

protected:
    void initConfig();
};

#endif //VENO_CONFIG_H

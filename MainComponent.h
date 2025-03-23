#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/


class OtherLookAndFeel : public juce::LookAndFeel_V4
{
    public:
        OtherLookAndFeel()
        {
            setColour(juce::Slider::thumbColourId, juce::Colours::red);
            setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::red);
        }
};

class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)

        juce::Slider dial1;
        juce::Slider dial2;

        OtherLookAndFeel otherLookAndFeel;


};

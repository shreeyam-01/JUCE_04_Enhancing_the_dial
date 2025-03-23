#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);

    addAndMakeVisible(dial1);
    addAndMakeVisible(dial2);

    dial1.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    dial2.setSliderStyle(juce::Slider::SliderStyle::Rotary);

    dial1.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 120, 50);
    dial2.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 120, 50);

    getLookAndFeel().setColour(juce::Slider::thumbColourId, juce::Colours::darkorange);
    getLookAndFeel().setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::darkorange);

    dial1.setLookAndFeel(&otherLookAndFeel);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    
}

void MainComponent::resized()
{
    const int border = 20;
    const int dialHeight = getHeight()-border-100;
    const int dialWidth = getWidth() / 2-border;

    dial1.setBounds(border,border,dialWidth, dialHeight);
    dial2.setBounds((getWidth() / 2), border, dialWidth, dialHeight);

}

﻿#pragma once

#include "ColorSchemes.g.h"
#include "ObjectModel/ColorSchemeModel.h"

namespace winrt::SettingsControl::implementation
{
    struct ColorSchemes : ColorSchemesT<ColorSchemes>
    {
        ColorSchemes();
        ObjectModel::ColorSchemeModel ColorSchemeModel();

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void Background_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Foreground_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Black_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightBlack_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Blue_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightBlue_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Cyan_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightCyan_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Green_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightGreen_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Purple_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightPurple_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Red_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightRed_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void White_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightWhite_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void Yellow_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);
        void BrightYellow_ColorChanged(Windows::UI::Xaml::Controls::ColorPicker const&, Windows::UI::Xaml::Controls::ColorChangedEventArgs const&);

    private:
        ObjectModel::ColorSchemeModel m_colorSchemeModel{ nullptr };
    };
}

namespace winrt::SettingsControl::factory_implementation
{
    struct ColorSchemes : ColorSchemesT<ColorSchemes, implementation::ColorSchemes>
    {
    };
}

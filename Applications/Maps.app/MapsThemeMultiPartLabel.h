//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMultiPartLabel.h>

#import "FontControllable-Protocol.h"
#import "MapsTheming-Protocol.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface MapsThemeMultiPartLabel : MKMultiPartLabel <MapsTheming, FontControllable>
{
    CDUnknownBlockType _textColorProvider;
}

@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (void)willMoveToWindow:(id)arg1;
- (void)updateTheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl
{
    NSMutableArray *_buttons;
    _Bool _numberButtonsEnabled;
    double _buttonBackgroundAlpha;
}

@property(nonatomic) double buttonBackgroundAlpha; // @synthesize buttonBackgroundAlpha=_buttonBackgroundAlpha;
@property(nonatomic) _Bool numberButtonsEnabled; // @synthesize numberButtonsEnabled=_numberButtonsEnabled;
- (void).cxx_destruct;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)_addButton:(id)arg1;
- (void)_layoutGrid;
- (void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;
@property(retain) NSArray *buttons; // @dynamic buttons;
- (struct CGSize)intrinsicContentSize;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithButtons:(id)arg1;

@end


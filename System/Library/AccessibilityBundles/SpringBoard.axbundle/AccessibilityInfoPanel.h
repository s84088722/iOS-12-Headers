//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AccessibilityInfoPanelWindow, NSString, UILabel, UIView, UIViewController;

@interface AccessibilityInfoPanel : NSObject
{
    UIViewController *_accessibilityInfoPanelController;
    AccessibilityInfoPanelWindow *_accessibilityInfoPanelWindow;
    UIView *_accessibilityInfoPanelView;
    UIView *_rootView;
    UILabel *_labelView;
    UIView *_backgroundView;
    NSString *_title;
    _Bool _displayOnBottomEdge;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_rootView;
- (id)_accessibilityInfoPanelView;
- (void)_layoutSubviews;
- (id)_accessibilityInfoPanelWindow;
- (id)_accessibilityInfoPanelController;
- (struct CGRect)_displayFrame;
- (void)fadeOut;
- (void)hide;
- (void)show;
@property(nonatomic) _Bool displayOnBottomEdge; // @dynamic displayOnBottomEdge;
- (void)_setup;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

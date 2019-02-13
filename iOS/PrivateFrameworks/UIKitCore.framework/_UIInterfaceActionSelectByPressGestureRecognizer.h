//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITapGestureRecognizer.h>

@class UIInterfaceAction, UIInterfaceActionGroupView;
@protocol UIFocusedInterfaceActionPressDelegate;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer
{
    id <UIFocusedInterfaceActionPressDelegate> _pressDelegate;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceAction *_interfaceActionOnPressBegan;
}

@property(nonatomic) __weak UIInterfaceAction *interfaceActionOnPressBegan; // @synthesize interfaceActionOnPressBegan=_interfaceActionOnPressBegan;
@property(nonatomic) __weak UIInterfaceActionGroupView *actionGroupView; // @synthesize actionGroupView=_actionGroupView;
@property(nonatomic) __weak id <UIFocusedInterfaceActionPressDelegate> pressDelegate; // @synthesize pressDelegate=_pressDelegate;
- (void).cxx_destruct;
- (void)_gestureChanged:(id)arg1;
- (void)reset;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFocusedInterfaceActionPressDelegate:(id)arg1;

@end


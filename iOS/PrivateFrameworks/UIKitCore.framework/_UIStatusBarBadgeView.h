//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDItem, UILabel;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBadgeView : UIView <_UIStatusBarDisplayable>
{
    UILabel *_label;
    NSArray *_constraintsWithConstant;
}

@property(retain, nonatomic) NSArray *constraintsWithConstant; // @synthesize constraintsWithConstant=_constraintsWithConstant;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end


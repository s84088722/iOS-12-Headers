//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NUIContainerStackViewDelegate-Protocol.h"

@class CardView, NSArray, NSString, NUIContainerStackView;

__attribute__((visibility("hidden")))
@interface ButtonsContainerViewController : UIViewController <NUIContainerStackViewDelegate>
{
    CardView *_cardview;
    NUIContainerStackView *_stackView;
    _Bool _visualEffectDisabled;
    NSArray *_floatingButtonItems;
    NSString *_blurGroupName;
}

@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
@property(readonly, copy, nonatomic) NSArray *floatingButtonItems; // @synthesize floatingButtonItems=_floatingButtonItems;
- (void).cxx_destruct;
- (void)refreshControls;
- (void)setVisibleControls:(long long)arg1;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFloatingButtonItems:(id)arg1 visualEffectDisabled:(_Bool)arg2;
- (id)initWithFloatingButtonItems:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


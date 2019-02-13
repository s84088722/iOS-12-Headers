//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController
{
    HUInstructionsItem *_instructionsItem;
    UIViewController *_contentViewController;
}

@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
- (void).cxx_destruct;
- (id)childViewControllersToPreload;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

@end


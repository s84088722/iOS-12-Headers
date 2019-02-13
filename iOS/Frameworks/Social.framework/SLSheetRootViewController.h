//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Social/SLComposeSheetConfigurationItemObserving-Protocol.h>
#import <Social/UITableViewDataSource-Protocol.h>
#import <Social/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, SLComposeServiceViewController, SLSheetTitleView, UIImage, UINavigationItem, UITableView, UITableViewController, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving>
{
    NSArray *_configurationItems;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
    UINavigationItem *_navItem;
    UIViewController *_autoCompletionViewController;
    SLComposeServiceViewController *_delegate;
    UIView *_contentView;
    UIImage *_serviceIconImage;
}

@property(retain, nonatomic) UIImage *serviceIconImage; // @synthesize serviceIconImage=_serviceIconImage;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak SLComposeServiceViewController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateCellForConfigurationItem:(id)arg1;
@property(copy, nonatomic) NSArray *configurationItems;
- (void)configurationItemDidChange:(id)arg1;
- (void)observeConfigurationItems:(id)arg1;
- (void)resetConfigurationItems;
- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(CDUnknownBlockType)arg1;
- (void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(CDUnknownBlockType)arg3;
- (void)updateContentViewSize:(struct CGSize)arg1;
- (id)navigationItem;
- (double)_preferredTableViewHeight;
- (void)setPostButtonEnabled:(_Bool)arg1;
- (void)setPostButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) UITableView *tableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


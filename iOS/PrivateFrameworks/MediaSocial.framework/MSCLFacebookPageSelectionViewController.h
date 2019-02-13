//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <MediaSocial/UITableViewDataSource-Protocol.h>
#import <MediaSocial/UITableViewDelegate-Protocol.h>

@class MSCLAccount, MSCLAccountStore, MSCLSettingsTableViewCell, NSString, UIImage, UITableView;

@interface MSCLFacebookPageSelectionViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MSCLAccount *_account;
    MSCLAccountStore *_accountStore;
    _Bool _didRequestImages;
    MSCLSettingsTableViewCell *_removeAccountButtonCell;
    UIImage *_placeholderImage;
    NSString *_selectedPageIdentifier;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (void)_layoutTableHeaderView;
- (id)_imageDataConsumer;
- (id)_facebookPageTableViewCellInTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_removalConfirmationMessage;
- (void)_removeAccount;
- (id)_attributedExplanationString;
- (void)_doneButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 fromStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


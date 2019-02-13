//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFAutocompleteResultsTableViewController.h>

#import <ChatKit/CKContactsSearchManagerDelegate-Protocol.h>
#import <ChatKit/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class CKContactsSearchManager, IDSBatchIDQueryController, IMAccount, NSArray, NSDate, NSString;
@protocol CKRecipientSearchListControllerDelegate;

@interface CKRecipientSearchListController : MFAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate>
{
    _Bool _smsEnabled;
    NSArray *_enteredRecipients;
    NSArray *_prefilteredRecipients;
    CKContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    IDSBatchIDQueryController *_statusQueryController;
    IMAccount *_defaultiMessageAccount;
    NSDate *_idsQueryStartTime;
    NSArray *_conversationCache;
}

@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) NSDate *idsQueryStartTime; // @synthesize idsQueryStartTime=_idsQueryStartTime;
@property(retain, nonatomic) IMAccount *defaultiMessageAccount; // @synthesize defaultiMessageAccount=_defaultiMessageAccount;
@property(retain, nonatomic) IDSBatchIDQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) CKContactsSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) _Bool smsEnabled; // @synthesize smsEnabled=_smsEnabled;
@property(retain, nonatomic) NSArray *prefilteredRecipients; // @synthesize prefilteredRecipients=_prefilteredRecipients;
@property(retain, nonatomic) NSArray *enteredRecipients; // @synthesize enteredRecipients=_enteredRecipients;
- (void).cxx_destruct;
- (BOOL)_serviceColorForRecipients:(id)arg1;
- (id)_statusQueryController;
- (void)removeRecipient:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic) _Bool suppressGroupSuggestions;
- (void)invalidateSearchManager;
- (void)cancelSearch;
- (void)invalidateOutstandingIDStatusRequests;
- (_Bool)isSearchResultsHidden;
- (_Bool)hasSearchResults;
- (void)searchWithText:(id)arg1;
- (void)chatStateChanged:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (Class)recipientTableViewCellClass;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKRecipientSearchListControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSuggestionsProbe-Protocol.h>

@class NSMutableArray, NSString;
@protocol CNScheduler, SGSuggestionsServiceContactsProtocol;

@interface CNAutocompleteSuggestionsProbe : NSObject <CNAutocompleteSuggestionsProbe>
{
    id <SGSuggestionsServiceContactsProtocol> _sgService;
    id <CNScheduler> _workScheduler;
    NSString *_bundleID;
    NSMutableArray *_pendingBlocks;
}

+ (int)suggestionSourcesForAutocompleteResult:(id)arg1;
+ (id)contactIdentifierForAutocompleteResult:(id)arg1;
+ (id)suggestionIdentifierForAutocompleteResult:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) id <CNScheduler> workScheduler; // @synthesize workScheduler=_workScheduler;
@property(readonly, nonatomic) id <SGSuggestionsServiceContactsProtocol> sgService; // @synthesize sgService=_sgService;
- (void).cxx_destruct;
- (void)sendData;
- (void)recordSGServiceMessage:(CDUnknownBlockType)arg1;
- (void)recordUserSawResultsConsideredSuggestion;
- (void)recordUserSelectedAutocompleteResult:(id)arg1;
- (id)initWithSuggestionsService:(id)arg1 schedulerProvider:(id)arg2 bundleIdentifier:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


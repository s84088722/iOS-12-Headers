//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFQueryableLibraryAdapter-Protocol.h>

@class MFMailMessageLibrary, NSArray, NSString;

@interface MFMobileLibraryAdapter : NSObject <MFQueryableLibraryAdapter>
{
    MFMailMessageLibrary *_library;
    NSArray *_accounts;
}

@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) MFMailMessageLibrary *library; // @synthesize library=_library;
- (id)_criterionForQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)messagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 limit:(unsigned long long)arg3;
- (id)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 groupBy:(unsigned long long)arg3;
- (unsigned long long)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)mailboxesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)mostRecent:(unsigned long long)arg1 messagesForMailbox:(id)arg2;
- (id)_userCreatedMailboxes;
- (void)dealloc;
- (id)initWithAccounts:(id)arg1 mailLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


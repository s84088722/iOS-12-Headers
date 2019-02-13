//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailboxUid, NSMutableArray, NSString;

@interface MFDbJournal : NSObject
{
    NSString *_path;
    MFMailboxUid *_mailbox;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    int _fd;
    NSMutableArray *_journalStatements;
    NSMutableArray *_onMergeEnvelopeUpdates;
}

+ (long long)mergeWithLibrary:(id)arg1;
+ (_Bool)hasEntries;
+ (id)legacyJournal;
+ (id)journalForMailbox:(id)arg1;
+ (void)initialize;
- (_Bool)_markMailboxForReconciliation:(_Bool)arg1 db:(struct sqlite3 *)arg2;
- (long long)mergeWithLibrary:(id)arg1;
- (int)_processJournalFile:(id)arg1 db:(struct sqlite3 *)arg2;
- (void)clear;
- (_Bool)_writeToDisk:(struct sqlite3 *)arg1;
- (int)_executeStatements:(id)arg1 db:(struct sqlite3 *)arg2;
- (int)commit:(struct sqlite3 *)arg1 isProtectedDataAvailable:(_Bool)arg2;
- (_Bool)append:(const char *)arg1 mergeUpdateStatement:(const char *)arg2;
- (void)dealloc;
- (id)initWithMailbox:(id)arg1;

@end


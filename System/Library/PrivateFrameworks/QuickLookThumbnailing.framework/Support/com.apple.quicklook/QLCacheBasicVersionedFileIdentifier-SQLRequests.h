//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheBasicVersionedFileIdentifier.h>

@interface QLCacheBasicVersionedFileIdentifier (SQLRequests)
- (id)initWithSteppedStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2;
- (struct sqlite3_stmt *)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2;
- (struct sqlite3_stmt *)statementToInsertIntoDatabase:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLDDatabaseIntegrityFault.h"

@class NSString;

@interface MLDIndexIntegrityFault : MLDDatabaseIntegrityFault
{
    NSString *_indexName;
}

@property(readonly, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (void).cxx_destruct;
- (id)_createErrorWithDescription:(id)arg1;
- (_Bool)attemptRecoveryUsingHandle:(struct sqlite3 *)arg1 withError:(id *)arg2;
- (id)initWithIndex:(id)arg1;

@end


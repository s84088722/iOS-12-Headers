//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MLDDatabaseIntegrityCheck, NSError, NSString;

@interface MLDDatabaseIntegrityCheckOperation : NSOperation
{
    NSString *_databasePath;
    MLDDatabaseIntegrityCheck *_check;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) MLDDatabaseIntegrityCheck *check; // @synthesize check=_check;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;
- (void)main;
- (id)initWithDatabasePath:(id)arg1;

@end


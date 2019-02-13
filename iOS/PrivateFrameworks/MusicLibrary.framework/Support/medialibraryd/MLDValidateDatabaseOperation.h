//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ML3MusicLibrary, NSArray, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MLDValidateDatabaseOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_completionBlocks;
    _Bool _truncateBeforeValidating;
    _Bool _success;
    ML3MusicLibrary *_library;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool truncateBeforeValidating; // @synthesize truncateBeforeValidating=_truncateBeforeValidating;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (_Bool)_internalUserAgreesToRebuildUnmigratableDatabase;
- (_Bool)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id *)arg2;
- (_Bool)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id *)arg2;
- (void)main;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllCompletionBlocks;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *completionBlocks;
- (id)initWithLibrary:(id)arg1;

@end


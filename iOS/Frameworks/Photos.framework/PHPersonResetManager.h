//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, PHPhotoLibrary;

@interface PHPersonResetManager : NSObject
{
    PHPhotoLibrary *_library;
    NSOperationQueue *_resetOperationQueue;
    _Bool _requiresPhotoAnalysisReset;
    CDUnknownBlockType _progressHandler;
    unsigned long long _batchSize;
}

@property(nonatomic) _Bool requiresPhotoAnalysisReset; // @synthesize requiresPhotoAnalysisReset=_requiresPhotoAnalysisReset;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void).cxx_destruct;
- (void)resetPersons:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetPersonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end


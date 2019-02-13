//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation
{
    NSArray *_requests;
    NSArray *_responses;
    NSError *_error;
    NSOperationQueue *_privateQueue;
    VUIMPMediaLibrary *_mediaLibrary;
}

@property(retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFFileCacheFaultHandler-Protocol.h>

@class NSArray, NSString, NSURLSession;

@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler>
{
    NSArray *_retryIntervals;
    NSURLSession *_urlSession;
}

@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(copy) NSArray *retryIntervals; // @synthesize retryIntervals=_retryIntervals;
- (void).cxx_destruct;
- (void)performLoadFromURL:(id)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)attemptLoadFromURL:(id)arg1 session:(id)arg2 retryIntervalEnumerator:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fileCache:(id)arg1 loadFileForIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


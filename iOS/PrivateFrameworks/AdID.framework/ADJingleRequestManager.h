//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton
{
    _Bool _jingleRequestInProgress;
    NSMutableDictionary *_pendingJingleRequests;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *pendingJingleRequests; // @synthesize pendingJingleRequests=_pendingJingleRequests;
@property _Bool jingleRequestInProgress; // @synthesize jingleRequestInProgress=_jingleRequestInProgress;
- (void).cxx_destruct;
- (void)authenticateUser:(CDUnknownBlockType)arg1;
- (void)jingleRequestCompleted:(id)arg1;
- (_Bool)canMakeJingleRequest;
- (id)makeOptOutRequest:(id)arg1 status:(_Bool)arg2 timestamp:(double)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)makeSegmentRequest:(id)arg1 forceSegments:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startJingleRequest:(id)arg1;
- (id)init;

@end


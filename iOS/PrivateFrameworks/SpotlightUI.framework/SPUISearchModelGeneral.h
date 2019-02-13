//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/SPUISearchModel.h>

@class NSObject, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel
{
    SPClientSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) SPClientSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)clear;
- (void)updateWithQueryContext:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)updatesEnabled;
- (void)updatesDisabled;
- (_Bool)forceStableResults;
- (void)setForceStableResults:(_Bool)arg1;
- (_Bool)infinitePatience;
- (void)setInfinitePatience:(_Bool)arg1;
- (id)init;

@end


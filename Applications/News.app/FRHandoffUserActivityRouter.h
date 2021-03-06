//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRUserActivityRoutable-Protocol.h"

@class FRAppActivityMonitor, FRScrollPositionController, FRUserActivityDataStreamExtractor, NSString, NSTimer, TSNewsActivityInfoDeserializer, TSNewsTabSplitViewNavigator;
@protocol TSActivityErrorHandlerType;

@interface FRHandoffUserActivityRouter : NSObject <FRUserActivityRoutable>
{
    TSNewsTabSplitViewNavigator *_navigator;
    id <TSActivityErrorHandlerType> _activityErrorHandler;
    FRScrollPositionController *_scrollHistoryController;
    NSTimer *_handoffStreamsTimer;
    FRUserActivityDataStreamExtractor *_streamExtractor;
    TSNewsActivityInfoDeserializer *_userActivityDeserializer;
    FRAppActivityMonitor *_appActivityMonitor;
}

@property(readonly, nonatomic) FRAppActivityMonitor *appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
@property(readonly, nonatomic) TSNewsActivityInfoDeserializer *userActivityDeserializer; // @synthesize userActivityDeserializer=_userActivityDeserializer;
@property(retain, nonatomic) FRUserActivityDataStreamExtractor *streamExtractor; // @synthesize streamExtractor=_streamExtractor;
@property(retain, nonatomic) NSTimer *handoffStreamsTimer; // @synthesize handoffStreamsTimer=_handoffStreamsTimer;
@property(retain, nonatomic) FRScrollPositionController *scrollHistoryController; // @synthesize scrollHistoryController=_scrollHistoryController;
@property(retain, nonatomic) id <TSActivityErrorHandlerType> activityErrorHandler; // @synthesize activityErrorHandler=_activityErrorHandler;
@property(retain, nonatomic) TSNewsTabSplitViewNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (_Bool)continueUserActivity:(id)arg1;
- (_Bool)canContinueUserActivityWithType:(id)arg1;
- (id)initWithNavigator:(id)arg1 scrollHistoryController:(id)arg2 appActivityMonitor:(id)arg3 userActivityDeserializer:(id)arg4 activityErrorHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


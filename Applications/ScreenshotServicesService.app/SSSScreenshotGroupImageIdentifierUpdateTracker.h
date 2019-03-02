//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSSScreenshotImageIdentifierUpdateObserving-Protocol.h"

@class NSMutableArray;
@protocol SSSScreenshotGroupImageIdentifierUpdateTrackerDelegate;

@interface SSSScreenshotGroupImageIdentifierUpdateTracker : NSObject <SSSScreenshotImageIdentifierUpdateObserving>
{
    NSMutableArray *_environmentDescriptionIdentifierForScreenshotsAwaitingImageIdentifierUpdates;
    long long _totalScreenshotsInGroup;
    id <SSSScreenshotGroupImageIdentifierUpdateTrackerDelegate> _delegate;
}

@property(nonatomic) __weak id <SSSScreenshotGroupImageIdentifierUpdateTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;
@property(readonly, nonatomic) double progressTowardsReceivingAllImageIdentifierUpdates;
- (void)_progressChanged;
- (void)screenshotReceivedImageIdentifierUpdate:(id)arg1;
- (void)addScreenshotToGroup:(id)arg1;

@end

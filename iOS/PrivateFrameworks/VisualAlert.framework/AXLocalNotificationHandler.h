//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualAlert/VISAXNotificationHandler.h>

@interface AXLocalNotificationHandler : VISAXNotificationHandler
{
    id _opaqueObserver;
}

@property(retain, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver; // @synthesize _opaqueObserver;
- (void).cxx_destruct;
- (id)_notificationTypeDescription;
- (void)_stopObserving;
- (void)_startObserving;
- (void)_stopObservingWithObject:(id)arg1;
- (void)_startObservingWithObject:(id)arg1;

@end


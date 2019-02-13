//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARSession;
@protocol MDARControllerDelegate;

__attribute__((visibility("hidden")))
@interface MDARController : NSObject
{
    unsigned long long _trackingState;
    unsigned long long _trackingStateReason;
    unsigned long long _sessionInterruptedReason;
    id <MDARControllerDelegate> _delegate;
    ARSession *_session;
}

+ (_Bool)isSupported;
@property(readonly, nonatomic) ARSession *session; // @synthesize session=_session;
@property(nonatomic) id <MDARControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long sessionInterruptedReason; // @synthesize sessionInterruptedReason=_sessionInterruptedReason;
- (void)pause;
- (void)run:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end


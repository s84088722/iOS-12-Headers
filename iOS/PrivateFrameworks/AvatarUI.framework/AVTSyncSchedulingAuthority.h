//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTSyncSchedulingAuthority-Protocol.h>

@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>
{
    id <AVTUILogger> _logger;
}

@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)madeLocalChanges;
- (void)didResetSync;
- (void)didReceivePushNotification;
- (void)exportDidCompleteSuccessfully;
- (void)importDidCompleteSuccessfully;
- (_Bool)exportRequired;
- (_Bool)importRequired;
- (id)initWithLogger:(id)arg1;

@end


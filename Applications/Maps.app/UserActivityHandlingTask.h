//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RichMapsActivityCreatingTaskImpl.h"

@class NSUserActivity;

__attribute__((visibility("hidden")))
@interface UserActivityHandlingTask : RichMapsActivityCreatingTaskImpl
{
    NSUserActivity *_userActivity;
}

+ (id)taskForUserActivity:(id)arg1 atColdLaunch:(_Bool)arg2;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (id)initWithUserActivity:(id)arg1;
- (void)_useMapsUserSessionEntity;
- (void)_sendAnalytics;

@end


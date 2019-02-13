//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WDNotificationPolicy-Protocol.h"

@class NSString, WDProfile;

@interface WDHealthRecordsNotificationPolicy : NSObject <WDNotificationPolicy>
{
    WDProfile *_profile;
}

@property(readonly, nonatomic) __weak WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)_appHealthDataViewController;
- (id)_appTabBarController;
- (void)_navigateAppToAllHealthRecords;
- (void)_navigateAppToSourcesTab;
- (_Bool)_appIsShowingHealthRecordsData;
- (_Bool)_appIsShowingSourcesTab;
- (void)_handleUnsupportedNotification:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithProfile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


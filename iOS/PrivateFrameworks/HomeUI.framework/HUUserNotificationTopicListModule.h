//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFUserNotificationServiceTopicItemProvider, HMHome;

@interface HUUserNotificationTopicListModule : HFItemModule
{
    HMHome *_home;
    HFUserNotificationServiceTopicItemProvider *_notificationTopicItemProvider;
}

+ (id)sectionID;
@property(readonly, nonatomic) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider; // @synthesize notificationTopicItemProvider=_notificationTopicItemProvider;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)topicForItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;

@end


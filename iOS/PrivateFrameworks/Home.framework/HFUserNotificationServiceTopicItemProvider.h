//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSSet *_topicItems;
}

@property(copy, nonatomic) NSSet *topicItems; // @synthesize topicItems=_topicItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/_MPCModelRadioPlaybackQueueSection-Protocol.h>

@class MPAVItem, NSString;

@interface _MPCModelRadioPlaybackQueueAVItemSection : NSObject <_MPCModelRadioPlaybackQueueSection>
{
    MPAVItem *_item;
}

+ (id)sectionWithAVItem:(id)arg1;
+ (id)placeholderSectionWithStationName:(id)arg1;
- (void).cxx_destruct;
- (id)trackForItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (id)AVItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


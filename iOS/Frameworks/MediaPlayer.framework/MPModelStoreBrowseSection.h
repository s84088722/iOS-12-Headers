//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelStoreBrowseResponse, NSString, NSURL;

@interface MPModelStoreBrowseSection : MPModelObject
{
}

+ (id)__previouslyRetrievedNestedResponse_KEY;
+ (id)__brick_KEY;
+ (id)__memberOfChartSet_KEY;
+ (id)__uniformContentItemType_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__sectionType_KEY;
+ (id)__title_KEY;

// Remaining properties
@property(nonatomic, getter=isBrick) _Bool brick; // @dynamic brick;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @dynamic loadAdditionalContentURL;
@property(nonatomic, getter=isMemberOfChartSet) _Bool memberOfChartSet; // @dynamic memberOfChartSet;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse; // @dynamic previouslyRetrievedNestedResponse;
@property(nonatomic) long long sectionType; // @dynamic sectionType;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long uniformContentItemType; // @dynamic uniformContentItemType;

@end


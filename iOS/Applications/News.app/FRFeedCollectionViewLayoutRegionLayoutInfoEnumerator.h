//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class FRFeedCollectionViewLayoutRegion, NFLFeedTileLayoutInfo, NSString;

@interface FRFeedCollectionViewLayoutRegionLayoutInfoEnumerator : NSEnumerator
{
    NFLFeedTileLayoutInfo *_currentLayoutInfo;
    NSString *_currentLayoutInfoID;
    long long _currentIndex;
    long long _currentRelativeYOrigin;
    FRFeedCollectionViewLayoutRegion *_owningRegion;
    NSEnumerator *_layoutInfoIDEnumerator;
}

@property(retain, nonatomic) NSEnumerator *layoutInfoIDEnumerator; // @synthesize layoutInfoIDEnumerator=_layoutInfoIDEnumerator;
@property(retain, nonatomic) FRFeedCollectionViewLayoutRegion *owningRegion; // @synthesize owningRegion=_owningRegion;
@property(nonatomic) long long currentRelativeYOrigin; // @synthesize currentRelativeYOrigin=_currentRelativeYOrigin;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSString *currentLayoutInfoID; // @synthesize currentLayoutInfoID=_currentLayoutInfoID;
@property(retain, nonatomic) NFLFeedTileLayoutInfo *currentLayoutInfo; // @synthesize currentLayoutInfo=_currentLayoutInfo;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithRegion:(id)arg1 layoutInfoIDEnumerator:(id)arg2;
- (id)init;

@end


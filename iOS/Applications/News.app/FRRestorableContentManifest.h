//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRFeedCollectionViewLayoutSectionDescriptor, NFLFeedTileLayoutInfo, NSString;

@interface FRRestorableContentManifest : NSObject
{
    _Bool _isInSameGroupAsAnchor;
    NFLFeedTileLayoutInfo *_layoutInfo;
    FRFeedCollectionViewLayoutSectionDescriptor *_sectionDescriptor;
    NSString *_identifierAnchoredAbove;
}

@property(readonly, nonatomic) _Bool isInSameGroupAsAnchor; // @synthesize isInSameGroupAsAnchor=_isInSameGroupAsAnchor;
@property(readonly, copy, nonatomic) NSString *identifierAnchoredAbove; // @synthesize identifierAnchoredAbove=_identifierAnchoredAbove;
@property(readonly, nonatomic) FRFeedCollectionViewLayoutSectionDescriptor *sectionDescriptor; // @synthesize sectionDescriptor=_sectionDescriptor;
@property(readonly, nonatomic) NFLFeedTileLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
- (void).cxx_destruct;
- (id)initWithLayoutInfo:(id)arg1 sectionDescriptor:(id)arg2 identifierAnchoredAbove:(id)arg3 isInSameGroupAsAnchor:(_Bool)arg4;

@end


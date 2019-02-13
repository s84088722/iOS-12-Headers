//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRValidatorRuleProviding-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprint, NSString;
@protocol NFLFeedTileInfo;

@interface FRNativeAdGroupBlacklistValidator : NSObject <FRValidatorRuleProviding>
{
    FRFeedCollectionViewLayoutBlueprint *_blueprint;
    long long _feedType;
    id <NFLFeedTileInfo> _tileInfoBefore;
}

+ (id)validatorWithBlueprint:(id)arg1 feedType:(long long)arg2;
@property(retain, nonatomic) id <NFLFeedTileInfo> tileInfoBefore; // @synthesize tileInfoBefore=_tileInfoBefore;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (_Bool)supportsValidationOfObjectClass:(Class)arg1;
- (void)testObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)relatedObjectGeneratedDuringTestingOfObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


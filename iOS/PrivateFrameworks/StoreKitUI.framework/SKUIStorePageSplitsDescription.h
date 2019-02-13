//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class SKUIStorePageSplit;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying>
{
    SKUIStorePageSplit *_bottomSplit;
    SKUIStorePageSplit *_leftSplit;
    SKUIStorePageSplit *_rightSplit;
    SKUIStorePageSplit *_topSplit;
}

@property(copy, nonatomic) SKUIStorePageSplit *topSplit; // @synthesize topSplit=_topSplit;
@property(copy, nonatomic) SKUIStorePageSplit *rightSplit; // @synthesize rightSplit=_rightSplit;
@property(copy, nonatomic) SKUIStorePageSplit *leftSplit; // @synthesize leftSplit=_leftSplit;
@property(copy, nonatomic) SKUIStorePageSplit *bottomSplit; // @synthesize bottomSplit=_bottomSplit;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long numberOfSplits;
@property(readonly, nonatomic) SKUIStorePageSplit *firstSplit;
- (void)enumerateSplitsUsingBlock:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHFetchResult;

@interface PXResultTuple : NSObject
{
    PHFetchResult *_fetchResult;
    PHFetchResult *_curatedFetchResult;
    PHFetchResult *_keyAssetsFetchResult;
}

@property(readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(readonly, nonatomic) PHFetchResult *curatedFetchResult; // @synthesize curatedFetchResult=_curatedFetchResult;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (void).cxx_destruct;
- (id)description;
- (id)resultTupleUpdatedWithChange:(id)arg1;
- (id)initWithFetchResult:(id)arg1 curatedFetchResult:(id)arg2 keyAssetsFetchResult:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemFactory-Protocol.h>

@class NSArray, NSString;

@interface SVPlayerItemFactory : NSObject <SVPlayerItemFactory>
{
    NSArray *_automaticallyLoadedAssetKeys;
}

@property(readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys; // @synthesize automaticallyLoadedAssetKeys=_automaticallyLoadedAssetKeys;
- (void).cxx_destruct;
- (id)createPlayerItemWithAsset:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


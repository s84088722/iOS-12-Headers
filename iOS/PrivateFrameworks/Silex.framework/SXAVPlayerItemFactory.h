//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAVPlayerItemFactory-Protocol.h>

@class NSArray, NSString;
@protocol SXAVURLAssetFactory;

@interface SXAVPlayerItemFactory : NSObject <SXAVPlayerItemFactory>
{
    NSArray *_automaticallyLoadedAssetKeys;
    id <SXAVURLAssetFactory> _assetFactory;
}

@property(readonly, nonatomic) id <SXAVURLAssetFactory> assetFactory; // @synthesize assetFactory=_assetFactory;
@property(readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys; // @synthesize automaticallyLoadedAssetKeys=_automaticallyLoadedAssetKeys;
- (void).cxx_destruct;
- (id)createPlayerItemWithURL:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1 assetFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject
{
    int _messageType;
    unsigned long long _cacheType;
    NSString *_assetKey;
    NSString *_gizmoCacheIdentifier;
    NSData *_assetData;
    SPAssetCacheSyncData *_syncData;
    unsigned long long _error;
}

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;
@property(nonatomic) unsigned long long error; // @synthesize error=_error;
@property(retain, nonatomic) SPAssetCacheSyncData *syncData; // @synthesize syncData=_syncData;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
@property(retain, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


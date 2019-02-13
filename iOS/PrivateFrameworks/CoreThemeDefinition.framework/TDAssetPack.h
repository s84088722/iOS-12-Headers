//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class CUIMutableCommonAssetStorage, NSSet, NSString;

@interface TDAssetPack : NSObject <NSCopying>
{
    _Bool wasModified;
    NSSet *tags;
    NSString *outputPath;
    CUIMutableCommonAssetStorage *assetStore;
    NSString *assetPackIdentifier;
}

@property(copy, nonatomic) NSString *assetPackIdentifier; // @synthesize assetPackIdentifier;
@property(nonatomic) _Bool wasModified; // @synthesize wasModified;
@property(retain) CUIMutableCommonAssetStorage *assetStore; // @synthesize assetStore;
@property(copy, nonatomic) NSString *outputPath; // @synthesize outputPath;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


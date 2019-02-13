//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetAdjustmentProperties : PHAssetPropertySet
{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    unsigned long long _originalResourceChoice;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, nonatomic) unsigned long long originalResourceChoice; // @synthesize originalResourceChoice=_originalResourceChoice;
@property(readonly, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(readonly, nonatomic) NSString *formatIdentifier; // @synthesize formatIdentifier=_formatIdentifier;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end


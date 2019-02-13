//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMProtoBufMerge-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge>
{
    NSNumber *_version;
    NSDictionary *_hapChrMap;
    NSDictionary *_hapSvcMap;
    NSDictionary *_hapCategoryMap;
}

+ (id)getSharedInstance;
@property(retain, nonatomic) NSDictionary *hapCategoryMap; // @synthesize hapCategoryMap=_hapCategoryMap;
@property(retain, nonatomic) NSDictionary *hapSvcMap; // @synthesize hapSvcMap=_hapSvcMap;
@property(retain, nonatomic) NSDictionary *hapChrMap; // @synthesize hapChrMap=_hapChrMap;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (_Bool)applyProtoBufData:(id)arg1 callbackOperations:(id)arg2;
- (id)categoryForCategoryType:(id)arg1;
- (id)categoryForNumber:(id)arg1;
- (id)characteristicTypeDescription:(id)arg1;
- (id)serviceTypeDescription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFServiceStateCharacteristicMatchResult : NSObject <NAIdentifiable>
{
    NSSet *_allCharacteristics;
    NSDictionary *_servicesByUUID;
    NSSet *_services;
    NSDictionary *_characteristicsByServiceUUID;
}

+ (id)na_identity;
+ (id)matchResultByMergingResults:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *characteristicsByServiceUUID; // @synthesize characteristicsByServiceUUID=_characteristicsByServiceUUID;
@property(readonly, copy, nonatomic) NSSet *services; // @synthesize services=_services;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSSet *allCharacteristics; // @synthesize allCharacteristics=_allCharacteristics;
@property(readonly, copy, nonatomic) NSDictionary *servicesByUUID; // @synthesize servicesByUUID=_servicesByUUID;
- (id)initWithServices:(id)arg1 characteristicsByServiceUUID:(id)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


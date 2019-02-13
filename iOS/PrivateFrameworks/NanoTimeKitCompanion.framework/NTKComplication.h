//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@interface NTKComplication : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _complicationType;
}

+ (_Bool)supportsSecureCoding;
+ (id)complicationWithJSONObjectRepresentation:(id)arg1;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (Class)_complicationClassForType:(unsigned long long)arg1;
+ (id)nullComplication;
+ (id)anyComplicationOfType:(unsigned long long)arg1;
+ (id)allComplicationsOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long complicationType; // @synthesize complicationType=_complicationType;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)JSONObjectRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1 subclassesAllowed:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)description;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKey;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (void)_setComplicationType:(unsigned long long)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;

@end


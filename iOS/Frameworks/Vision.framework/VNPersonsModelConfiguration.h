//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _maximumIdentities;
    unsigned long long _maximumFaceprintsPerIdentity;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;
@property(nonatomic) unsigned long long maximumIdentities; // @synthesize maximumIdentities=_maximumIdentities;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long maximumFaceprintsPerIdentity; // @synthesize maximumFaceprintsPerIdentity=_maximumFaceprintsPerIdentity;
- (id)init;
- (int)faceIDModelMaximumElementsPerID;

@end


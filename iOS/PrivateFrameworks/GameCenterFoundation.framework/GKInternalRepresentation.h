//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)secureCodedPropertyKeys;
+ (id)codedPropertyKeys;
+ (id)internalRepresentation;
+ (_Bool)supportsSecureCoding;
- (void)mergePropertiesFrom:(id)arg1;
- (id)serverRepresentation;
- (id)description;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)descriptionSubstitutionMap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


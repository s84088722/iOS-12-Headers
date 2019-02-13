//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_variants;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *variants; // @synthesize variants=_variants;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_bestVariantForUIFormat:(int)arg1;
- (id)_bestVariantForFormat:(long long)arg1;
- (void)addVariant:(id)arg1;

@end

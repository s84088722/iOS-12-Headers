//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureValueConstraint-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    long long _keyType;
}

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithKeyType:(long long)arg1;

@end

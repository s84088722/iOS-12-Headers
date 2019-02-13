//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface RTAction : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;
    NSString *_name;
    long long _conditions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long conditions; // @synthesize conditions=_conditions;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 andOptions:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 conditions:(long long)arg2;
- (id)initWithName:(id)arg1 conditions:(long long)arg2 identifier:(id)arg3;
- (id)init;

@end


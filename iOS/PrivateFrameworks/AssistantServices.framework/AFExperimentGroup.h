//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperimentGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _allocation;
    NSDictionary *_properties;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) unsigned long long allocation; // @synthesize allocation=_allocation;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 allocation:(unsigned long long)arg2 properties:(id)arg3;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

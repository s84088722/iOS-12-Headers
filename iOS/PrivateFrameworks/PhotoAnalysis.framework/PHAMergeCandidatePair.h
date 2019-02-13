//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHAMergeCandidatePair : NSObject
{
    unsigned long long _hash;
    NSString *_person1LocalIdentifier;
    NSString *_person2LocalIdentifier;
    NSString *_reason;
}

+ (id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) NSString *person2LocalIdentifier; // @synthesize person2LocalIdentifier=_person2LocalIdentifier;
@property(readonly) NSString *person1LocalIdentifier; // @synthesize person1LocalIdentifier=_person1LocalIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;

@end


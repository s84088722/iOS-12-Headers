//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKTriple : NSObject
{
    // Error parsing type: , name: value
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)dictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hashValue;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long weight;
@property(nonatomic, readonly) NSString *object;
@property(nonatomic, readonly) NSString *predicate;
@property(nonatomic, readonly) NSString *subject;

@end


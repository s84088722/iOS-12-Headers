//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemMessages : NSObject <NSSecureCoding>
{
    NSString *_capacity;
    NSString *_used;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *used; // @synthesize used=_used;
@property(retain, nonatomic) NSString *capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end


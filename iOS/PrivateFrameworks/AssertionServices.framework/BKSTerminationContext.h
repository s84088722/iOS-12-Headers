//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssertionServices/BSXPCCoding-Protocol.h>
#import <AssertionServices/NSCopying-Protocol.h>

@class NSString;

@interface BKSTerminationContext : NSObject <BSXPCCoding, NSCopying>
{
    long long _exceptionCode;
    unsigned long long _reportType;
    NSString *_explanation;
}

+ (id)context;
+ (id)terminationAssertionContext;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) long long exceptionCode; // @synthesize exceptionCode=_exceptionCode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTerminationContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


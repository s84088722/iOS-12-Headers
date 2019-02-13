//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCoding-Protocol.h>
#import <CoreFoundation/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface NSException : NSObject <NSCopying, NSCoding>
{
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)init;
- (void)raise;
- (id)redactedDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_installStackTraceKeyIfNeeded;
@property(readonly, copy) NSArray *callStackSymbols;
@property(readonly, copy) NSArray *callStackReturnAddresses;
@property(readonly, copy) NSDictionary *userInfo;
@property(readonly, copy) NSString *reason;
@property(readonly, copy) NSString *name;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/NSCopying-Protocol.h>
#import <SAObjects/NSMutableCopying-Protocol.h>
#import <SAObjects/NSObject-Protocol.h>
#import <SAObjects/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol AceContext;

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSMutableDictionary *)properties;
- (NSMutableDictionary *)dictionary;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)init;
@end


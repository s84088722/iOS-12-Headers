//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSObject-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol INGenericIntent <NSObject, NSCopying, NSSecureCoding>
@property(copy, nonatomic) NSDictionary *parametersByName;
@property(copy, nonatomic) NSString *verb;
@property(copy, nonatomic) NSString *domain;
- (_Bool)isGenericIntent;
@end


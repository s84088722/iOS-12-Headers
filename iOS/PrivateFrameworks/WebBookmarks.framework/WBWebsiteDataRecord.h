//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface WBWebsiteDataRecord : NSObject
{
    NSString *_domain;
    unsigned long long _usage;
}

+ (id)websiteDataRecordFromXPCDictionary:(id)arg1;
+ (id)websiteDataRecordWithDomain:(id)arg1;
@property(nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2;
- (id)_initWithDomain:(id)arg1;
@property(readonly, copy, nonatomic) NSObject<OS_xpc_object> *XPCDictionaryRepresentation;

@end


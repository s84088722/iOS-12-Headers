//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDKeyValueDomain, HDProfile, NSCalendar;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject
{
    struct os_unfair_lock_s _lock;
    HDProfile *_profile;
    NSCalendar *_gregorianCalendar;
    HDKeyValueDomain *_keyValueDomain;
}

@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HDKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)templateForDateComponents:(id)arg1 error:(id *)arg2;
- (id)allCachedTemplatesWithError:(id *)arg1;
- (_Bool)cacheTemplate:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;

@end


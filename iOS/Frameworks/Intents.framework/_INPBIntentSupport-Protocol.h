//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentType;

@protocol _INPBIntentSupport <NSObject>
+ (Class)intentsSupportedType;
+ (Class)intentsRestrictedWhileLockedType;
@property(readonly, nonatomic) unsigned long long intentsSupportedsCount;
@property(copy, nonatomic) NSArray *intentsSupporteds;
@property(readonly, nonatomic) unsigned long long intentsRestrictedWhileLockedsCount;
@property(copy, nonatomic) NSArray *intentsRestrictedWhileLockeds;
- (_INPBIntentType *)intentsSupportedAtIndex:(unsigned long long)arg1;
- (void)addIntentsSupported:(_INPBIntentType *)arg1;
- (void)clearIntentsSupporteds;
- (_INPBIntentType *)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (void)addIntentsRestrictedWhileLocked:(_INPBIntentType *)arg1;
- (void)clearIntentsRestrictedWhileLockeds;
@end


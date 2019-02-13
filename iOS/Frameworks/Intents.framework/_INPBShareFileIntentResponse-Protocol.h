//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBShareDestination;

@protocol _INPBShareFileIntentResponse <NSObject>
+ (Class)recipientsType;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool success;
@property(nonatomic) _Bool hasShareMode;
@property(nonatomic) int shareMode;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) _Bool hasConfirm;
@property(nonatomic) _Bool confirm;
- (int)StringAsShareMode:(NSString *)arg1;
- (NSString *)shareModeAsString:(int)arg1;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned long long)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearRecipients;
@end


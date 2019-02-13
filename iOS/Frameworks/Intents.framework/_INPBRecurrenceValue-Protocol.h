//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBRecurrenceValue <NSObject>
@property(nonatomic) _Bool hasOrdinal;
@property(nonatomic) long long ordinal;
@property(nonatomic) _Bool hasInterval;
@property(nonatomic) unsigned long long interval;
@property(nonatomic) _Bool hasFrequency;
@property(nonatomic) int frequency;
- (int)StringAsFrequency:(NSString *)arg1;
- (NSString *)frequencyAsString:(int)arg1;
@end

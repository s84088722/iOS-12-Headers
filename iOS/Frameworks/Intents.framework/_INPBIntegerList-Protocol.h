//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBInteger;

@protocol _INPBIntegerList <NSObject>
+ (Class)dataStringType;
@property(readonly, nonatomic) unsigned long long dataStringsCount;
@property(copy, nonatomic) NSArray *dataStrings;
@property(readonly, nonatomic) _Bool hasConditionType;
@property(retain, nonatomic) _INPBCondition *conditionType;
- (_INPBInteger *)dataStringAtIndex:(unsigned long long)arg1;
- (void)addDataString:(_INPBInteger *)arg1;
- (void)clearDataStrings;
@end


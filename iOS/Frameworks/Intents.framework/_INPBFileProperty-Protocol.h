//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBFilePropertyValue;

@protocol _INPBFileProperty <NSObject>
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) _INPBFilePropertyValue *value;
@property(nonatomic) _Bool hasQualifier;
@property(nonatomic) int qualifier;
@property(nonatomic) _Bool hasName;
@property(nonatomic) int name;
- (int)StringAsQualifier:(NSString *)arg1;
- (NSString *)qualifierAsString:(int)arg1;
- (int)StringAsName:(NSString *)arg1;
- (NSString *)nameAsString:(int)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBString;

@protocol _INPBCopyFileIntentResponse <NSObject>
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool success;
@property(nonatomic) _Bool hasOverwrite;
@property(nonatomic) _Bool overwrite;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) _Bool hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@property(readonly, nonatomic) _Bool hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
@end


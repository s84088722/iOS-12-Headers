//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPSearchViewAppearFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool readerTextAvailable;
@property(nonatomic) _Bool isOverApp;
@property(nonatomic) _Bool isOnLockScreen;
@property(nonatomic) int viewAppearEvent;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;

@protocol EKProtocolObject <NSObject>
+ (NSSet *)propertiesUnavailableForPartialObjects;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, nonatomic) _Bool isPartialObject;
@property(readonly, nonatomic) _Bool canBeConvertedToFullObject;
- (_Bool)isPropertyUnavailable:(NSString *)arg1;
- (_Bool)isNew;
- (_Bool)isFrozen;
@end


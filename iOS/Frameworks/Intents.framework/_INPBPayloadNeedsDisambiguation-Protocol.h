//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBSelectionItem;

@protocol _INPBPayloadNeedsDisambiguation <NSObject>
+ (Class)disambiguationItemsType;
@property(readonly, nonatomic) unsigned long long disambiguationItemsCount;
@property(copy, nonatomic) NSArray *disambiguationItems;
- (_INPBSelectionItem *)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationItems:(_INPBSelectionItem *)arg1;
- (void)clearDisambiguationItems;
@end


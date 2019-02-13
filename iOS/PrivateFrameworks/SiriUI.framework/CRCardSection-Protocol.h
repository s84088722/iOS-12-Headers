//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSCopying-Protocol.h>
#import <SiriUI/NSObject-Protocol.h>

@class INInteraction, NSArray, NSSet, NSString;
@protocol SFCardSection;

@protocol CRCardSection <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *cardSectionIdentifier;

@optional
@property(readonly, nonatomic) _Bool hasNextCard;
@property(readonly, nonatomic) NSArray *actionCommands;
@property(readonly, nonatomic) id <SFCardSection> backingCardSection;
- (NSSet *)parametersForInteraction:(INInteraction *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUSCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRowCardSection : SAUSCardSection
{
}

+ (id)rowCardSectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rowCardSection;
@property(copy, nonatomic) NSString *rightText;
@property(copy, nonatomic) NSString *leftText;
@property(nonatomic) _Bool imageIsRightAligned;
@property(retain, nonatomic) SAUIImageResource *image;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


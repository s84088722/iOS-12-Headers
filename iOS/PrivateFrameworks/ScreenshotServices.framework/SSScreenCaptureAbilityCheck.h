//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSScreenCaptureAbilityCheck : NSObject
{
    _Bool _isAbleToTakeScreenshots;
    NSString *_reasonForNotBeingAbleToTakeScreenshots;
}

+ (id)abilityCheck;
@property(copy, nonatomic) NSString *reasonForNotBeingAbleToTakeScreenshots; // @synthesize reasonForNotBeingAbleToTakeScreenshots=_reasonForNotBeingAbleToTakeScreenshots;
@property(nonatomic) _Bool isAbleToTakeScreenshots; // @synthesize isAbleToTakeScreenshots=_isAbleToTakeScreenshots;
- (void).cxx_destruct;

@end


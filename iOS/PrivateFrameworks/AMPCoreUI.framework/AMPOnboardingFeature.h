//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AMPOnboardingFeature : NSObject
{
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
}

@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3;

@end


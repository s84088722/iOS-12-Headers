//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIViewController;

@interface CDPRemoteValidationEscapeOffer : NSObject
{
    NSMutableArray *_escapeOptions;
    UIViewController *_presentingViewController;
    NSString *_escapeOfferName;
    NSString *_title;
    NSString *_message;
}

@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *escapeOfferName; // @synthesize escapeOfferName=_escapeOfferName;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (long long)_styleForEscapeOption:(id)arg1;
- (void)dismissOfferAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_actionFromEscapeOption:(id)arg1;
- (void)handleEscapeAction:(id)arg1;
- (id)escapeOptions;
- (void)addEscapeOptionsObject:(id)arg1;
- (id)init;

@end


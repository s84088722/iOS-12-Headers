//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSScreenshot;

@interface SSSPendingScreenshotRecord : NSObject
{
    SSSScreenshot *_screenshot;
    CDUnknownBlockType _deliveryCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deliveryCompletionBlock; // @synthesize deliveryCompletionBlock=_deliveryCompletionBlock;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;
- (id)initWithScreenshot:(id)arg1 deliveryCompletionBlock:(CDUnknownBlockType)arg2;

@end


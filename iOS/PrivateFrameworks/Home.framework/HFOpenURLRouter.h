//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HFApplicationURLHandling;

@interface HFOpenURLRouter : NSObject
{
    id <HFApplicationURLHandling> _applicationURLHandler;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <HFApplicationURLHandling> applicationURLHandler; // @synthesize applicationURLHandler=_applicationURLHandler;
- (void).cxx_destruct;
- (id)openURL:(id)arg1;

@end


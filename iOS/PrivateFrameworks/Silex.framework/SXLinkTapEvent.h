//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXAnalyticsEvent.h>

@class NSURL;

@interface SXLinkTapEvent : SXAnalyticsEvent
{
    NSURL *_destinationURL;
}

@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void).cxx_destruct;
- (id)initWithDestinationURL:(id)arg1;

@end


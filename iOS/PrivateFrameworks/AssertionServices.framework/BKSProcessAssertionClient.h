//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssertionServices/BKSBaseAssertionClient.h>

__attribute__((visibility("hidden")))
@interface BKSProcessAssertionClient : BKSBaseAssertionClient
{
}

- (void)assertionQueue_handleMessage:(id)arg1;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (_Bool)sendCreateEvent:(id)arg1 error:(id *)arg2;
- (double)backgroundTimeRemaining:(int)arg1;
- (id)supportedAssertionType;

@end


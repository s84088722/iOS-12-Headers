//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSSSignificantEventController : NSObject
{
}

+ (id)sharedSignificantEventController;
- (void)screenshotUIWithScreenshots:(id)arg1 endedStateChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 userInterface:(id)arg4;
- (void)screenshotUIWithScreenshots:(id)arg1 beganStateChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)screenshotAppearAnimationEndedForScreenshot:(id)arg1 userInterface:(id)arg2;
- (void)screenshotAppearAnimationBeganForScreenshot:(id)arg1;
- (void)_finishRunPPTServiceRequest:(id)arg1;
- (id)_runPPTServiceRequestForScreenshots:(id)arg1;
- (id)_runPPTServiceRequestForScreenshot:(id)arg1;

@end


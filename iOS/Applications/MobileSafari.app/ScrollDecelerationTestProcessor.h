//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentInteractionTestRunner.h"

@interface ScrollDecelerationTestProcessor : ContentInteractionTestRunner
{
    int _iterationsRemaining;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) int iterationsRemaining; // @synthesize iterationsRemaining=_iterationsRemaining;
- (_Bool)performActionForPage:(id)arg1;
- (_Bool)startPageAction:(id)arg1;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;

@end


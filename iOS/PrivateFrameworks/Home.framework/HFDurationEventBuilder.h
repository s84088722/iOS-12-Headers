//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder
{
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (id)buildNewEventFromCurrentState;
- (id)initWithEvent:(id)arg1;

@end


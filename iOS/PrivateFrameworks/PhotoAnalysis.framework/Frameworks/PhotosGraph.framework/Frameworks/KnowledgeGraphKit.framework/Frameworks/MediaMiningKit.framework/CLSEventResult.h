//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSEvent;

@interface CLSEventResult : NSObject
{
    float _confidence;
    CLSEvent *_event;
}

+ (id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) CLSEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)description;
- (void)mergeWithResult:(id)arg1;
- (_Bool)isSameEventAsResult:(id)arg1;

@end


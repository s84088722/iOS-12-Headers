//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicControlTargetAction : NSObject
{
    id _target;
    SEL _action;
    unsigned long long _controlEvents;
}

@property(nonatomic) unsigned long long controlEvents; // @synthesize controlEvents=_controlEvents;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;

@end


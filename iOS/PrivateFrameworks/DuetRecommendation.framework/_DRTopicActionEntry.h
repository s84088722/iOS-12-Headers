//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _DRTopicActionEntry : NSObject
{
    NSString *_topic;
    NSDate *_when;
    unsigned long long _action;
}

@property(readonly) unsigned long long action; // @synthesize action=_action;
@property(readonly, retain) NSDate *when; // @synthesize when=_when;
@property(readonly, retain) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3;

@end


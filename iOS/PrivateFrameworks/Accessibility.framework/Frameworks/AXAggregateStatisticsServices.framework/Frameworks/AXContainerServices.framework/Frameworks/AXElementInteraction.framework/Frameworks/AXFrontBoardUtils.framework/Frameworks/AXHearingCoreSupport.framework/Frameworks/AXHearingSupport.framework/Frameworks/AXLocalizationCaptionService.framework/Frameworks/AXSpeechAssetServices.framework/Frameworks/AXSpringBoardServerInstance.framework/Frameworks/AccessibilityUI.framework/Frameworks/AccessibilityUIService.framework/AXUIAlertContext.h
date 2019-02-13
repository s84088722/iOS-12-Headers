//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXUIAlert, NSString, UIImage;
@protocol AXUIService;

@interface AXUIAlertContext : NSObject
{
    NSString *_identifier;
    double _creationTimeInterval;
    double _fadeAnimationDuration;
    AXDispatchTimer *_showOrHideTimer;
    AXUIAlert *_alertView;
    id <AXUIService> _service;
    unsigned long long _priority;
    double _duration;
    NSString *_text;
    NSString *_subtitleText;
    UIImage *_iconImage;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id <AXUIService> service; // @synthesize service=_service;
@property(retain, nonatomic) AXUIAlert *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) AXDispatchTimer *showOrHideTimer; // @synthesize showOrHideTimer=_showOrHideTimer;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double creationTimeInterval; // @synthesize creationTimeInterval=_creationTimeInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end


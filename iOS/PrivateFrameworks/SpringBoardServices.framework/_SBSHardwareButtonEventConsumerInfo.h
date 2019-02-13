//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class NSString, SBSHardwareButtonService;
@protocol SBSHardwareButtonEventConsuming;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable>
{
    _Bool _valid;
    SBSHardwareButtonService *_service;
    id <SBSHardwareButtonEventConsuming> _consumer;
    long long _buttonKind;
    unsigned long long _eventMask;
    long long _eventPriority;
}

+ (id)infoWithConsumer:(id)arg1;
@property(nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(nonatomic) long long buttonKind; // @synthesize buttonKind=_buttonKind;
@property(retain, nonatomic) id <SBSHardwareButtonEventConsuming> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) __weak SBSHardwareButtonService *service; // @synthesize service=_service;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


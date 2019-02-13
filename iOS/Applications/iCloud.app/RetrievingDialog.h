//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RetrievingDialogDelegate;

@interface RetrievingDialog : NSObject
{
    id <RetrievingDialogDelegate> _delegate;
    struct __CFUserNotification *_retrievingNotification;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct __CFUserNotification *retrievingNotification; // @synthesize retrievingNotification=_retrievingNotification;
@property(nonatomic) __weak id <RetrievingDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)schedule;
- (void)_schedule;
- (void)_displayIfRequired;
- (void)dismissDialog:(id)arg1;
- (void)_display;
- (void)_timeoutMinPeriod;
- (void)abort;
- (void)_dismiss;
- (const char *)stateName;
- (id)init;

@end


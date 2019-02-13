//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/LSOpenResourceOperationDelegate-Protocol.h>

@class NSOperation, NSString;
@protocol LSOpenResourceOperationDelegate;

__attribute__((visibility("hidden")))
@interface _LSOpenResourceOperationDelegateWrapper : NSObject <LSOpenResourceOperationDelegate>
{
    NSOperation *_operation;
    id <LSOpenResourceOperationDelegate> _delegate;
}

- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <dispatch/OS_object.h>

#import <xpc/OS_xpc_object-Protocol.h>

@class NSString;

@interface OS_xpc_object : OS_object <OS_xpc_object>
{
}

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_dispose;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUIUtilities/AXDragEndpointVendorDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXDragSessionDragManager-Protocol.h>
#import <AccessibilityUIUtilities/NSXPCListenerDelegate-Protocol.h>

@class AXDragEndpointVendor, NSMutableArray, NSString, NSXPCListener;
@protocol AXDragManagerDelegate;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager>
{
    AXDragEndpointVendor *_vendor;
    NSXPCListener *_endpointListener;
    NSMutableArray *_activeSessions;
    id <AXDragManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <AXDragManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sessionWasTerminated:(id)arg1;
- (void)resume;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSObject, Protocol;
@protocol NSObject, NSSecureCoding, _MXExtensionResponseObserver;

@protocol _MXExtensionStreamingRequestDispatching <NSObject>
- (void)stopSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2;
- (void)startSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2 toObserver:(id <_MXExtensionResponseObserver>)arg3;

@optional
- (Protocol *)serviceProtocol;
@end


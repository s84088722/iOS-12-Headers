//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTCallCapabilities, CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientCallDelegate <NSObject>

@optional
- (void)callCapabilitiesChanged:(CTXPCServiceSubscriptionContext *)arg1 capabilities:(CTCallCapabilities *)arg2;
@end


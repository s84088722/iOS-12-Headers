//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterServices/NSObject-Protocol.h>

@class NSString;

@protocol CCSRemoteServiceServerProtocol <NSObject>
- (void)requestEnableModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)getEnabledStateOfModuleWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end


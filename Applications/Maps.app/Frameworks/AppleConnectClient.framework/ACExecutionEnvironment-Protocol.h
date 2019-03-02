//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleConnectClient/NSObject-Protocol.h>

@class NSURL;

@protocol ACExecutionEnvironment <NSObject>
@property(readonly, nonatomic) long long applicationState;
@property(nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) _Bool extensionMode;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithExpirationHandler:(void (^)(void))arg1;
- (_Bool)openURL:(NSURL *)arg1;
- (_Bool)canOpenURL:(NSURL *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UIStatusBarStateProvider;

@protocol UIStatusBarStateObserver <NSObject>
- (void)statusBarStateProvider:(id <UIStatusBarStateProvider>)arg1 didPostStatusBarData:(const CDStruct_1916f467 *)arg2 withActions:(int)arg3;

@optional
- (void)statusBarStateProvider:(id <UIStatusBarStateProvider>)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
@end


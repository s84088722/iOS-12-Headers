//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICSLoggingDelegate;

@interface ICSLogger : NSObject
{
    int _logCount;
    id <ICSLoggingDelegate> _loggingDelegate;
}

+ (void)setDelegate:(id)arg1;
+ (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;

@end


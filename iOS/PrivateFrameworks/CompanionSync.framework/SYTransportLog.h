//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface SYTransportLog : NSObject
{
    NSObject<OS_os_log> *_log;
    NSString *_facility;
    NSObject<OS_os_log> *_oslog;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property(copy, nonatomic) NSString *facility; // @synthesize facility=_facility;
- (void).cxx_destruct;
- (void)_logOSMessage:(const char *)arg1 args:(struct __va_list_tag [1])arg2 returnAddress:(void *)arg3;
- (void)logMessage:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (void)logMessage:(id)arg1;
- (void)_createLog;
- (id)init;

@end


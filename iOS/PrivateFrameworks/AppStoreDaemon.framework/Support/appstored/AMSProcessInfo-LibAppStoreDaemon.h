//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSProcessInfo.h>

@interface AMSProcessInfo (LibAppStoreDaemon)
+ (struct __CFDictionary *)_copyInfoDictionaryForExecutablePath:(id)arg1;
+ (id)_copyExecutablePathForPID:(int)arg1;
+ (struct __CFBundle *)_copyBundleForExecutablePath:(id)arg1;
+ (id)lib_newProcessInfoForConnection:(id)arg1;
+ (id)lib_daemonProcessInfo;
+ (id)lib_appProcessInfo;
+ (id)lib_agentProcessInfo;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVPostTask, NSData, NSError;

@protocol CoreDAVPostTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)postTask:(CoreDAVPostTask *)arg1 data:(NSData *)arg2 error:(NSError *)arg3;
@end


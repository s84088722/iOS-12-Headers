//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface CLSEILogging : NSObject
{
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)sharedLogging;
@property(readonly) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (void).cxx_destruct;

@end


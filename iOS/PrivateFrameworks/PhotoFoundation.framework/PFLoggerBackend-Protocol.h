//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/NSObject-Protocol.h>

@class NSString;

@protocol PFLoggerBackend <NSObject>
@property(readonly, nonatomic) _Bool outputsToDebuggerConsole;
@property(readonly, nonatomic) _Bool formatsMessage;
@property(readonly, nonatomic) _Bool allowsConcurrentAccess;
- (void)flushWithCompletionHandler:(void (^)(void))arg1;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(NSString *)arg2 subsystem:(NSString *)arg3 level:(int)arg4 message:(NSString *)arg5 format:(NSString *)arg6 args:(struct __va_list_tag [1])arg7;
@end


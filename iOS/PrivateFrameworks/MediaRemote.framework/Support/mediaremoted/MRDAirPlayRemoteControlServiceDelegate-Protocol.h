//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDAirPlayRemoteControlService, NSInputStream, NSOutputStream;

@protocol MRDAirPlayRemoteControlServiceDelegate <NSObject>
- (void)airPlayRemoteControlService:(MRDAirPlayRemoteControlService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
@end


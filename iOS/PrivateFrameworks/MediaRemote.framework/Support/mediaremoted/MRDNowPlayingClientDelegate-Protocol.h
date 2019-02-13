//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDNowPlayingClient, MRDNowPlayingPlayerClient, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerPathProtobuf;

@protocol MRDNowPlayingClientDelegate <NSObject>

@optional
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 applicationDidForeground:(_Bool)arg2 forPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg3;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 anyPlayerIsPlayingDidChange:(_Bool)arg2 forPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg3;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 playerDidUnregisterForPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg2;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 playerDidRegisterForPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg2;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 clientStateDidChange:(_MRNowPlayingClientProtobuf *)arg2 forPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg3;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 activePlayerDidChangeFromPlayerClient:(MRDNowPlayingPlayerClient *)arg2 toPlayerClient:(MRDNowPlayingPlayerClient *)arg3;
@end


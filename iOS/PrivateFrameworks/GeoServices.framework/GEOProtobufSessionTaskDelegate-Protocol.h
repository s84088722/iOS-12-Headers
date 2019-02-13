//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSError, PBCodable;

@protocol GEOProtobufSessionTaskDelegate <NSObject>
- (void)protobufSession:(GEOProtobufSession *)arg1 didCompleteTask:(GEOProtobufSessionTask *)arg2;

@optional
- (NSError *)protobufSession:(GEOProtobufSession *)arg1 validateResponse:(PBCodable *)arg2;
- (void)protobufSession:(GEOProtobufSession *)arg1 willSendRequestForTask:(GEOProtobufSessionTask *)arg2 completionHandler:(void (^)(PBRequest *))arg3;
@end


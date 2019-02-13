//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IdentityLookup/NSObject-Protocol.h>

@class ILClassificationReportRequest, ILMessageFilterQueryRequest, ILMessageFilterReportRequest;

@protocol ILMessageFilterHostProtocol <NSObject>
- (oneway void)performClassificationReportRequest:(ILClassificationReportRequest *)arg1;
- (oneway void)performReportRequest:(ILMessageFilterReportRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)performQueryRequest:(ILMessageFilterQueryRequest *)arg1 reply:(void (^)(ILMessageFilterQueryResponse *, NSError *))arg2;
@end


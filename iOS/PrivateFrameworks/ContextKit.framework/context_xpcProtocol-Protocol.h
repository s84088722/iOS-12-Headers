//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKContextRequest, CKContextResult, NSString;

@protocol context_xpcProtocol
- (void)statusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)logTransactionSuccessfulForResponseId:(NSString *)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5;
- (void)logEngagementForResponseId:(NSString *)arg1 result:(CKContextResult *)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
- (void)logResultsShownForResponseId:(NSString *)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(_Bool)arg4 inputLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
- (void)shutdownServiceWithReply:(void (^)(void))arg1;
- (void)pingServiceWithReply:(void (^)(void))arg1;
- (void)portraitBlacklistWithReply:(void (^)(NSSet *))arg1;
- (void)capabilitiesForRequestType:(unsigned long long)arg1 withReply:(void (^)(NSSet *, NSString *, NSError *))arg2;
- (void)warmUpForRequestType:(unsigned long long)arg1 withReply:(void (^)(NSError *))arg2;
- (void)findResponseByID:(NSString *)arg1 reply:(void (^)(CKContextResponse *))arg2;
- (void)findResultsForRequest:(CKContextRequest *)arg1 withReply:(void (^)(CKContextResponse *))arg2;
@end


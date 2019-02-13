//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSData, NSDictionary, NSMutableSet, NSSet, NSString;

@interface CoreDAVBulkChangeTask : CoreDAVTask
{
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSDictionary *_uuidsToAddActions;
    NSDictionary *_hrefsToModDeleteActions;
    NSString *_checkCTag;
    _Bool _simple;
    _Bool _returnChangedData;
    NSData *_pushedData;
    _Bool _validCTag;
    NSString *_nextCTag;
    NSMutableSet *_bulkChangeResponses;
    NSString *_requestDataContentType;
}

@property(readonly, nonatomic) NSSet *bulkChangeResponses; // @synthesize bulkChangeResponses=_bulkChangeResponses;
@property(readonly, nonatomic) NSString *nextCTag; // @synthesize nextCTag=_nextCTag;
@property(readonly, nonatomic) NSDictionary *hrefsToModDeleteActions; // @synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions;
@property(readonly, nonatomic) NSDictionary *uuidsToAddActions; // @synthesize uuidsToAddActions=_uuidsToAddActions;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (id)requestBody;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(_Bool)arg3 returnChangedData:(_Bool)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6;

@end


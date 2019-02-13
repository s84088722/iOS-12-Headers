//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest
{
    _Bool _wantsProtectionInfo;
    CDUnknownBlockType _progressBlock;
    NSArray *_infosToDiscover;
    NSMutableDictionary *_submittedInfos;
}

@property(retain, nonatomic) NSMutableDictionary *submittedInfos; // @synthesize submittedInfos=_submittedInfos;
@property(retain, nonatomic) NSArray *infosToDiscover; // @synthesize infosToDiscover=_infosToDiscover;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) _Bool wantsProtectionInfo; // @synthesize wantsProtectionInfo=_wantsProtectionInfo;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (long long)databaseScope;
- (id)initWithLookupInfos:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKAcceptSharesOperation : CKOperation
{
    CDUnknownBlockType _perShareCompletionBlock;
    CDUnknownBlockType _acceptSharesCompletionBlock;
    NSArray *_shareMetadatas;
    NSMutableDictionary *_errorsByShareURL;
    NSMutableDictionary *_shareMetadatasByShareURL;
}

@property(retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL; // @synthesize shareMetadatasByShareURL=_shareMetadatasByShareURL;
@property(retain, nonatomic) NSMutableDictionary *errorsByShareURL; // @synthesize errorsByShareURL=_errorsByShareURL;
@property(copy, nonatomic) NSArray *shareMetadatas; // @synthesize shareMetadatas=_shareMetadatas;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType acceptSharesCompletionBlock; // @synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perShareCompletionBlock; // @synthesize perShareCompletionBlock=_perShareCompletionBlock;
- (id)initWithShareMetadatas:(id)arg1;
- (id)init;

@end


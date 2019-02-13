//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLResultSetInitializer-Protocol.h"

@class NSString;

@interface CPLPrequeliteOutgoingResource : NSObject <PQLResultSetInitializer>
{
    int _fileKind;
    long long _scopeIndex;
    NSString *_itemIdentifier;
    unsigned long long _resourceType;
    NSString *_fingerPrint;
    NSString *_fileUTI;
    unsigned long long _fileSize;
    NSString *_uploadIdentifier;
}

@property(copy, nonatomic) NSString *uploadIdentifier; // @synthesize uploadIdentifier=_uploadIdentifier;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int fileKind; // @synthesize fileKind=_fileKind;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long scopeIndex; // @synthesize scopeIndex=_scopeIndex;
- (void).cxx_destruct;
- (id)resourceWithScopeIdentifier:(id)arg1;
- (id)resourceWithOutgoingResources:(id)arg1;
- (id)initWithResource:(id)arg1 uploadIdentifier:(id)arg2;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


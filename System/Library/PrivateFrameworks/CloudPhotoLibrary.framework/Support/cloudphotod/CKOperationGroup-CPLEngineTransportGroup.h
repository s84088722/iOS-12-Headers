//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationGroup.h>

#import "CPLEngineTransportGroup-Protocol.h"

@class NSString;

@interface CKOperationGroup (CPLEngineTransportGroup) <CPLEngineTransportGroup>
- (id)cplDebugDescription;
- (void)setRoughCPLRecordCount:(unsigned long long)arg1;
- (void)setRoughCPLDownloadEstimatedSizeWithEstimatedRecordCount:(unsigned long long)arg1;
- (void)setRoughCPLDownloadEstimatedSize:(unsigned long long)arg1;
- (void)setRoughCPLUploadEstimatedSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


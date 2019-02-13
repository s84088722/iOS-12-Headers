//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class DownloadPipeline, DownloadPolicyManager, ExternalDownloadState, SSSQLiteDatabase;

@interface DownloadsSessionDescriptor : NSObject <NSCopying>
{
    SSSQLiteDatabase *_database;
    ExternalDownloadState *_externalState;
    DownloadPipeline *_pipeline;
    DownloadPolicyManager *_policyManager;
}

@property(retain, nonatomic) DownloadPolicyManager *policyManager; // @synthesize policyManager=_policyManager;
@property(retain, nonatomic) DownloadPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) ExternalDownloadState *externalState; // @synthesize externalState=_externalState;
@property(retain, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

#import "NSCopying-Protocol.h"

@class NSData, SSDownloadPolicy;

@interface DownloadPolicy : SSMemoryEntity <NSCopying>
{
    SSDownloadPolicy *_cachedPolicy;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *policyData;
@property(readonly, nonatomic) SSDownloadPolicy *downloadPolicy;
- (id)copyBackgroundTaskAgentJobs;

@end

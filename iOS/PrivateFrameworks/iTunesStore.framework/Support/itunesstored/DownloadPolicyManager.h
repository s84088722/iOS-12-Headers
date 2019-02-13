//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadsDatabase, NSMutableDictionary;

@interface DownloadPolicyManager : NSObject
{
    DownloadsDatabase *_database;
    NSMutableDictionary *_policies;
    NSMutableDictionary *_sizeLimitOverrides;
}

@property(readonly, nonatomic) __weak DownloadsDatabase *downloadsDatabase; // @synthesize downloadsDatabase=_database;
- (long long)_sizeLimitForPolicy:(id)arg1 networkType:(long long)arg2;
- (_Bool)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(long long)arg3;
- (_Bool)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(long long)arg2;
- (_Bool)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(long long)arg2;
- (void)_initializePolicy;
- (void)_addPolicy:(id)arg1;
- (void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(long long)arg2;
- (void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1;
- (id)overrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1;
- (long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(long long)arg2;
- (long long)downloadSizeLimitForPolicyWithID:(long long)arg1;
- (id)downloadPolicyForID:(long long)arg1;
- (long long)addDownloadPolicy:(id)arg1;
- (void)dealloc;
- (id)initWithDownloadsDatabase:(id)arg1;
- (id)init;

@end


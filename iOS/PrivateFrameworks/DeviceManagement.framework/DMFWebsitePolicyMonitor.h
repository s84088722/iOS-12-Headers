//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface DMFWebsitePolicyMonitor : NSObject
{
    NSArray *_policyTypes;
    NSUUID *_policyMonitorIdentifier;
}

@property(readonly, nonatomic) NSUUID *policyMonitorIdentifier; // @synthesize policyMonitorIdentifier=_policyMonitorIdentifier;
@property(copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
- (void).cxx_destruct;
- (_Bool)askPermissionForWebsite:(id)arg1 error:(id *)arg2;
- (void)_fetchCategoriesIfNeededForWebsites:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)requestPoliciesForWebsites:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;

@end


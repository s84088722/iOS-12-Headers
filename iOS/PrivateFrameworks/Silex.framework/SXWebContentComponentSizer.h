//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

@protocol SXWebContentLoadingPolicyProvider;

@interface SXWebContentComponentSizer : SXComponentSizer
{
    id <SXWebContentLoadingPolicyProvider> _loadingPolicyProvider;
}

@property(readonly, nonatomic) id <SXWebContentLoadingPolicyProvider> loadingPolicyProvider; // @synthesize loadingPolicyProvider=_loadingPolicyProvider;
- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 loadingPolicyProvider:(id)arg6;

@end


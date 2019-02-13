//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/NSMutableCopying-Protocol.h>

@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _supportsFullApplicationReload;
    long long _tabBarControllerStyle;
    _Bool _pageRenderMetricsEnabled;
    _Bool _requiresLocalBootstrapScript;
    _Bool _bootstrapScriptFallbackEnabled;
    double _bootstrapScriptFallbackMaximumAge;
    double _bootstrapScriptTimeoutInterval;
    _Bool _useTransientStorageForTests;
}

@property(readonly, nonatomic) _Bool useTransientStorageForTests;
@property(readonly, nonatomic) double bootstrapScriptTimeoutInterval;
@property(readonly, nonatomic) double bootstrapScriptFallbackMaximumAge;
@property(readonly, nonatomic, getter=isBootstrapScriptFallbackEnabled) _Bool bootstrapScriptFallbackEnabled;
@property(readonly, nonatomic) _Bool requiresLocalBootstrapScript;
@property(readonly, nonatomic) _Bool pageRenderMetricsEnabled;
@property(readonly, nonatomic) long long tabBarControllerStyle;
@property(readonly, nonatomic) _Bool supportsFullApplicationReload;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end


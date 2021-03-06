//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface SVSSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;
    NSURL *_URL;
    NSMutableDictionary *_bundleURLsByBundleIdentifier;
}

+ (id)sharedSiriPresentationPluginHost;
+ (id)_defaultURL;
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)_save;
- (void)_load;
- (void)_loadFromPropertyListRepresentation:(id)arg1;
- (id)_propertyListRepresentation;
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)preloadPluginBundles;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;
- (void)_rescanBundles;
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;

@end


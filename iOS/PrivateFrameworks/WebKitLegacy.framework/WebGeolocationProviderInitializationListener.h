//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationProviderInitializationListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener>
{
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation>> m_geolocation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initializationDeniedWebView:(id)arg1;
- (void)initializationAllowedWebView:(id)arg1;
- (id)initWithGeolocation:(struct Geolocation *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


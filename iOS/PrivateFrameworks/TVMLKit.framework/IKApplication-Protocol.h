//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class IKAppDocument, IKViewElementRegistry, NSDictionary, NSString, NSURL;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring;

@protocol IKApplication <NSObject>
- (id <IKAppUserDefaultsStoring>)userDefaultsStorage;
- (id <IKAppDataStoring>)vendorStorage;
- (id <IKAppDataStoring>)localStorage;
- (NSString *)vendorIdentifier;
- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (_Bool)shouldIgnoreJSValidation;

@optional
- (NSDictionary *)appTraitCollection;
- (_Bool)appUsesDefaultStyleSheets;
- (IKViewElementRegistry *)viewElementRegistry;
- (IKAppDocument *)activeDocument;
- (NSDictionary *)appLaunchParams;
- (NSString *)appLaunchParamsResolvedBootURLKey;
- (_Bool)appIsPrivileged;
- (_Bool)appIsTrusted;
- (_Bool)shouldAllowRemoteInspection;
- (NSURL *)appLocalJSURL;
- (NSURL *)appJSCachePath;
- (NSURL *)offlineJSURL;
- (NSString *)bagBootURLKey;
@end


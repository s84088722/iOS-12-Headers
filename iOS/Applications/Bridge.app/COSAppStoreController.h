//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "COSAppStoreExtensionProvider-Protocol.h"

@class NSExtension, NSMutableDictionary, NSString;

@interface COSAppStoreController : NSObject <COSAppStoreExtensionProvider>
{
    NSExtension *_extension;
    NSMutableDictionary *_mappedViewControllers;
}

@property(retain, nonatomic) NSMutableDictionary *mappedViewControllers; // @synthesize mappedViewControllers=_mappedViewControllers;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (id)_tabIdentifierForTab:(unsigned long long)arg1;
- (id)replaceExtensionForAppStoreViewController:(id)arg1;
- (id)extensionForAppStoreViewController:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)viewControllerForTab:(unsigned long long)arg1;
- (id)viewControllers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


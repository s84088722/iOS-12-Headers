//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/SXAdControllerDelegate-Protocol.h>
#import <NewsUI/SXAdControllerFactory-Protocol.h>
#import <NewsUI/SXAdProvider-Protocol.h>

@class FCArticle, NSString;
@protocol NUAdLayoutOptionsFactory, NUAdMetadataFactory, NUAdProvider, NUAdSettings, NUDevice;

@interface NUArticleAdManager : NSObject <NUAdContextProvider, SXAdControllerDelegate, SXAdProvider, SXAdControllerFactory>
{
    FCArticle *_article;
    id <NUAdProvider> _adProvider;
    id <NUAdMetadataFactory> _adMetadataFactory;
    id <NUAdSettings> _settings;
    id <NUDevice> _device;
    id <NUAdLayoutOptionsFactory> _layoutOptionsFactory;
}

@property(readonly, nonatomic) id <NUAdLayoutOptionsFactory> layoutOptionsFactory; // @synthesize layoutOptionsFactory=_layoutOptionsFactory;
@property(readonly, nonatomic) id <NUDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) id <NUAdSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <NUAdMetadataFactory> adMetadataFactory; // @synthesize adMetadataFactory=_adMetadataFactory;
@property(readonly, nonatomic) id <NUAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didUnloadBannerView:(id)arg3 withError:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 failedToLoadBannerView:(id)arg3 error:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didLoadBannerView:(id)arg3;
- (CDUnknownBlockType)adForRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)adControllerForDocument:(id)arg1 viewport:(id)arg2;
- (id)initWithArticle:(id)arg1 adProvider:(id)arg2 adMetadataFactory:(id)arg3 settings:(id)arg4 device:(id)arg5 layoutOptionsFactory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


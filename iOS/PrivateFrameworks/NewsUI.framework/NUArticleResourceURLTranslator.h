//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleResourceURLTranslator-Protocol.h>

@class NSString;
@protocol FCNewsAppConfigurationManager;

@interface NUArticleResourceURLTranslator : NSObject <NUArticleResourceURLTranslator>
{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (void).cxx_destruct;
- (id)defaultURLForEndpoint:(long long)arg1;
- (long long)endpointForScheme:(id)arg1;
- (id)translateFileURLForURL:(id)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


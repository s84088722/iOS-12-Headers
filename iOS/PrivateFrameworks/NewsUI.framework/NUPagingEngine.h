//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPagingFactory-Protocol.h>

@class NSString, NUArticlePageFactory, NUWelcomeToNewsPageFactory;

@interface NUPagingEngine : NSObject <NUPagingFactory>
{
    NUArticlePageFactory *_articlePageFactory;
    NUWelcomeToNewsPageFactory *_welcomeToNewsPageFactory;
}

@property(readonly, nonatomic) NUWelcomeToNewsPageFactory *welcomeToNewsPageFactory; // @synthesize welcomeToNewsPageFactory=_welcomeToNewsPageFactory;
@property(readonly, nonatomic) NUArticlePageFactory *articlePageFactory; // @synthesize articlePageFactory=_articlePageFactory;
- (void).cxx_destruct;
- (id)paging:(id)arg1 byRemovingPage:(id)arg2;
- (id)paging:(id)arg1 byAddingPage:(id)arg2 afterPage:(id)arg3;
- (id)createPagingForArticleIDs:(id)arg1;
- (id)initWithArticlePageFactory:(id)arg1 welcomeToNewsPageFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


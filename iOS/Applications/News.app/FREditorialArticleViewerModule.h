//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSEditorialArticleViewerModuleType-Protocol.h"

@protocol FRFeldsparContext, NFResolver;

@interface FREditorialArticleViewerModule : NSObject <TSEditorialArticleViewerModuleType>
{
    id <FRFeldsparContext> _feldsparContext;
    id <NFResolver> _resolver;
}

@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (id)createViewControllerForArticleID:(id)arg1 articleContext:(id)arg2 referral:(id)arg3 fragment:(id)arg4 attributesProvider:(id)arg5;
- (id)createViewController;
- (id)initWithFeldpsarContext:(id)arg1 resolver:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCArticle, FRArticlePageViewController, FRArticleViewContext, SXContext, UIView;
@protocol FCHeadlineProviding, FRFeldsparContext, FRFlintArticleProvider;

@protocol FRFlintArticleDataSource <NSObject>
- (UIView *)presentationViewForProvider:(id <FRFlintArticleProvider>)arg1;
- (FCArticle *)articleForProvider:(id <FRFlintArticleProvider>)arg1;
- (id <FCHeadlineProviding>)articleHeadlineForProvider:(id <FRFlintArticleProvider>)arg1;
- (FRArticlePageViewController *)articlePageViewControllerForProvider:(id <FRFlintArticleProvider>)arg1;
- (FRArticleViewContext *)articleViewContextForProvider:(id <FRFlintArticleProvider>)arg1;
- (SXContext *)silexContextForProvider:(id <FRFlintArticleProvider>)arg1;
- (id <FRFeldsparContext>)feldsparContextForProvider:(id <FRFlintArticleProvider>)arg1;
@end


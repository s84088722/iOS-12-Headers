//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIStateRestoring-Protocol.h"

@class FRArticlePageViewController, FRArticleViewHeadlineContext, NSArray;
@protocol FCHeadlineProviding;

@protocol FRArticlePageViewDelegate <UIStateRestoring>

@optional
- (void)articlePageViewController:(FRArticlePageViewController *)arg1 hideTabBar:(_Bool)arg2;
- (void)articlePageViewController:(FRArticlePageViewController *)arg1 didFinishLoadingEndOfArticleSectionWithHeadline:(id <FCHeadlineProviding>)arg2 publisherHeadlines:(NSArray *)arg3 relatedHeadlines:(NSArray *)arg4;
- (void)articlePageViewController:(FRArticlePageViewController *)arg1 didSelectHeadlineContext:(FRArticleViewHeadlineContext *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle, NSString;

@protocol NUArticleDataProvider <NSObject>
@property(readonly, nonatomic) FCArticle *article;
@property(readonly, copy, nonatomic) NSString *articleID;
- (void)loadContextWithCompletionBlock:(void (^)(SXContext *, NSError *))arg1;
@end


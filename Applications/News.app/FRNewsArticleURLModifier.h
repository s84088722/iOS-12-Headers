//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NUURLModifying-Protocol.h"

@class FCArticle, NSString;

@interface FRNewsArticleURLModifier : NSObject <NUURLModifying>
{
    FCArticle *_article;
}

@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (id)modifyURL:(id)arg1;
- (id)initWithArticle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FRExternalEvent : NSObject
{
    NSDictionary *_queryParameters;
}

+ (id)streamViewEventWithEventType:(id)arg1 mediaType:(long long)arg2 userAction:(long long)arg3 hashedArticleID:(id)arg4 articleID:(id)arg5 publisherID:(id)arg6;
+ (id)articleViewEventWithPublisherID:(id)arg1 hashedArticleID:(id)arg2 articleID:(id)arg3 referrerID:(id)arg4 articleType:(long long)arg5;
+ (id)sectionViewEventWithPublisherID:(id)arg1;
+ (id)feedViewEventWithPublisherID:(id)arg1 referrerID:(id)arg2;
+ (id)appOpenViewEvent;
@property(retain, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
- (void).cxx_destruct;
- (id)initWithQueryParameters:(id)arg1;

@end


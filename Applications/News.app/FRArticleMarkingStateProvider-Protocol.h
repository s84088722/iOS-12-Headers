//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FRArticleMarkingStateProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, nonatomic) _Bool offensive;
@property(readonly, nonatomic) _Bool muted;
@property(readonly, nonatomic) _Bool disliked;
@property(readonly, nonatomic) _Bool liked;
@property(readonly, nonatomic) _Bool saved;

@optional
- (void)setOffensive:(_Bool)arg1;
- (void)setDisliked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLiked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSaved:(_Bool)arg1 animated:(_Bool)arg2;
@end


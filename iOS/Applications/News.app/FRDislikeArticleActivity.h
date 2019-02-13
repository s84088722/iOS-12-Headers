//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class FRArticleViewHeadlineContext;
@protocol FRActivityTypeDislikeDelegate;

@interface FRDislikeArticleActivity : UIActivity
{
    _Bool _isDisliked;
    FRArticleViewHeadlineContext *_headlineContext;
    long long _location;
    id <FRActivityTypeDislikeDelegate> _delegate;
}

@property(retain, nonatomic) id <FRActivityTypeDislikeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDisliked; // @synthesize isDisliked=_isDisliked;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(retain, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithHeadlineContext:(id)arg1;

@end


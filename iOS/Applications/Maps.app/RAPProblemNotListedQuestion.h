//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPCommentQuestion.h"

#import "RAPCommentQuestionProtocol-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPMenuItem-Protocol.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface RAPProblemNotListedQuestion : RAPCommentQuestion <RAPMenuItem, RAPCommentQuestionProtocol, RAPInstrumentableTarget>
{
    NSString *_localizedTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int userAction;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 localizedTitle:(id)arg3;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPMenuItem-Protocol.h"

@class NSArray, NSString, RAPTransitLine, RAPTransitLineMenuQuestion, UIImage;
@protocol MKTransitLineMarker;

__attribute__((visibility("hidden")))
@interface RAPTransitLineSelectionQuestion : RAPQuestion <RAPMenuItem>
{
    RAPTransitLine *_selectedLine;
    _Bool _hasDownloadedLines;
    long long _selectedQuestionCategory;
    id <MKTransitLineMarker> _selectedTransitLineMarker;
    NSArray *_selectableLines;
    NSArray *_transitLineIdentifiersToDownload;
    RAPTransitLineMenuQuestion *_followUpQuestion;
}

+ (_Bool)canDisplayForDirectionRequest:(id)arg1;
@property(retain, nonatomic) NSArray *transitLineIdentifiersToDownload; // @synthesize transitLineIdentifiersToDownload=_transitLineIdentifiersToDownload;
@property(retain, nonatomic) RAPTransitLine *selectedLine; // @synthesize selectedLine=_selectedLine;
@property(copy, nonatomic) id <MKTransitLineMarker> selectedTransitLineMarker; // @synthesize selectedTransitLineMarker=_selectedTransitLineMarker;
- (void).cxx_destruct;
- (_Bool)_isRecursivelyComplete;
- (_Bool)isComplete;
- (void)_fillSubmittableProblem:(id)arg1;
- (void)downloadIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadTransitLineNamesWithCompletion:(CDUnknownBlockType)arg1;
- (id)transitLineIdentifiersFromStation:(id)arg1;
@property(readonly, nonatomic) NSArray *selectableLines; // @synthesize selectableLines=_selectableLines;
@property(readonly, nonatomic) RAPTransitLineMenuQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property(readonly, nonatomic) _Bool shouldPickTransitLineFromMap;
@property(readonly, nonatomic) CDStruct_02837cd9 mapRectForLineSelection;
@property(readonly, nonatomic) NSString *localizedMapInstructionsForLineSelection;
@property(readonly, nonatomic) NSString *localizedLineSelectionPrompt;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
- (void)_queueLineDownloadForStation:(id)arg1;
- (void)_getLinesFromDirections:(id)arg1;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 station:(id)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 directions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly) Class superclass;

@end


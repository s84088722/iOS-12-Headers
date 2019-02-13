//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotesUI/UITextViewDelegate-Protocol.h>

@class NSString, NoteContentLayer, NoteObject, NotesBackgroundView;

@interface NotePreviewController : UIViewController <UITextViewDelegate>
{
    NoteObject *_note;
    NoteContentLayer *_contentLayer;
}

@property(retain, nonatomic) NoteContentLayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) NoteObject *note; // @synthesize note=_note;
- (void).cxx_destruct;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (void)setupHTMLNotePreviewWithFrame:(struct CGRect)arg1;
- (void)setupHTMLNotePreview;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

